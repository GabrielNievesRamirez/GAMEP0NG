#include "Paleta.hpp"

Paleta::Paleta() {
    // Constructor de la clase Paleta
}

void Paleta::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}

void Paleta::setTexture(const sf::Texture& texture) {
    textura = texture;
    sprite.setTexture(textura);
}

void Paleta::move(float offsetX, float offsetY) {
    sprite.move(offsetX, offsetY);
}

sf::Vector2f Paleta::getPosition() const {
    return sprite.getPosition();
}

sf::FloatRect Paleta::getGlobalBounds() const {
    return sprite.getGlobalBounds();
}

void Paleta::draw(sf::RenderWindow& ventana) const {
    ventana.draw(sprite);
}

void Paleta::aumentarPuntos() {
    contPuntos++;
}

int Paleta::getPuntos() const {
    return contPuntos;
}
