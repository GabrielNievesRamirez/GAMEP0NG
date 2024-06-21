#include <iostream> 
#include "Bola.hpp"

Bola::Bola() {
    if (!bolaT.loadFromFile("build/assets/ball.png")) {
        std::cout << "Error al cargar textura Bola" << std::endl;
    }

    bola.setTexture(bolaT);
    bola.setOrigin(bolaT.getSize().x / 2.f, bolaT.getSize().y / 2.f);
    bola.setPosition(425, 250);
    bola.setScale(0.25f, 0.25f);

    velX = 2;
    velY = 2;
}

void Bola::actualizar() {
    bola.move(velX, velY);
}

void Bola::dibujar(sf::RenderWindow& ventana) {
    ventana.draw(bola);
}

void Bola::rebotar(const sf::Sprite& paletaD, const sf::Sprite& paletaI) {
    if (paletaD.getGlobalBounds().intersects(bola.getGlobalBounds()) ||
        paletaI.getGlobalBounds().intersects(bola.getGlobalBounds())) {
        velX *= -1;
    }

    if (bola.getPosition().y > 500 || bola.getPosition().y < 0) {
        velY *= -1;
    }
}

const sf::Sprite& Bola::getSprite() const {
    return bola;
}
