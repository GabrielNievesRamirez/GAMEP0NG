#include <iostream> 
#include "Paleta.hpp"

Paleta::Paleta(float x, float y, float rotacion) {
    if (!paletaT.loadFromFile("build/assets/paddle.png")) {
        std::cout << "Error al cargar textura Paleta" << std::endl;
    }

    paleta.setTexture(paletaT);
    paleta.setOrigin(paletaT.getSize().x / 2.f, paletaT.getSize().y / 2.f);
    paleta.setRotation(rotacion);
    paleta.setPosition(x, y);
}

void Paleta::actualizar(bool arriba, bool abajo) {
    if (arriba && paleta.getPosition().y > 0) {
        paleta.move(0, -4);
    }
    if (abajo && paleta.getPosition().y < 500) {
        paleta.move(0, 4);
    }
}

void Paleta::dibujar(sf::RenderWindow& ventana) {
    ventana.draw(paleta);
}

const sf::Sprite& Paleta::getSprite() const {
    return paleta;
}
