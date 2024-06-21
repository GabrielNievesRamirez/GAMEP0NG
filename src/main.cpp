#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bola.hpp"
#include "Paleta.hpp"
#include "Marcador.hpp"

using namespace sf;
using namespace std;

// Declaración de variables globales
Texture bolaT;
Texture paletaT;
RenderWindow ventana;

float velX = 2;
float velY = 2;

int main() {
    // Cargar texturas
    if (!bolaT.loadFromFile("build/assets/ball.png")) {
        cout << "Error al cargar textura Bola" << endl;
    }

    if (!paletaT.loadFromFile("build/assets/paddle.png")) {
        cout << "Error al cargar textura Paleta" << endl;
    }

    // Configurar sprites y textos
    Sprite bola;
    Sprite paletaD;
    Sprite paletaI;

    bola.setTexture(bolaT);
    bola.setOrigin((float)bolaT.getSize().x / 2, (float)bolaT.getSize().y / 2);
    bola.setPosition(425, 250);
    bola.setScale(0.25f, 0.25f);

    paletaD.setTexture(paletaT);
    paletaD.setOrigin((float)paletaT.getSize().x / 2, (float)paletaT.getSize().y / 2);
    paletaD.setRotation(-90);
    paletaD.setPosition(825, 250);

    paletaI.setTexture(paletaT);
    paletaI.setOrigin((float)paletaT.getSize().x / 2, (float)paletaT.getSize().y / 2);
    paletaI.setRotation(90);
    paletaI.setPosition(25, 250);

    // Configurar ventana
    ventana.create(VideoMode(850, 500), "Pong");
    ventana.setFramerateLimit(120);

    // Bucle principal del juego
    while (ventana.isOpen()) {
        Event event;
        while (ventana.pollEvent(event)) {
            if (event.type == Event::Closed) {
                ventana.close();
            }
        }

        // Lógica de movimiento de la bola y colisiones
        bola.move(velX, velY);

        if (paletaD.getGlobalBounds().contains(bola.getPosition()) || paletaI.getGlobalBounds().contains(bola.getPosition())) {
            velX *= -1;
        } else if (bola.getPosition().x > 850) {
            velX *= -1;
            bola.setPosition(425, 250);
        } else if (bola.getPosition().x < 0) {
            velX *= -1;
            bola.setPosition(425, 250);
        }

        if (bola.getPosition().y > 500 || bola.getPosition().y < 0) {
            velY *= -1;
        }

        // Control de paletas
        if (Keyboard::isKeyPressed(Keyboard::Up) && paletaD.getPosition().y > 0) {
            paletaD.move(0, -4);
        }
        if (Keyboard::isKeyPressed(Keyboard::Down) && paletaD.getPosition().y < 500) {
            paletaD.move(0, 4);
        }

        if (Keyboard::isKeyPressed(Keyboard::W) && paletaI.getPosition().y > 0) {
            paletaI.move(0, -4);
        }
        if (Keyboard::isKeyPressed(Keyboard::S) && paletaI.getPosition().y < 500) {
            paletaI.move(0, 4);
        }

        // Dibujar en la ventana
        ventana.clear();
        ventana.draw(bola);
        ventana.draw(paletaD);
        ventana.draw(paletaI);
        ventana.display();
    }

    return 0;
}
