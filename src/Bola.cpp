#include "Bola.hpp"

Bola::Bola() {
    // Constructor de la clase Bola
}

void Bola::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}

void Bola::setTexture(const sf::Texture& texture) {
    textura = texture;
    sprite.setTexture(textura);
}

void Bola::move(float offsetX, float offsetY) {
    sprite.move(offsetX, offsetY);
}

sf::Vector2f Bola::getPosition() const {
    return sprite.getPosition();
}

sf::FloatRect Bola::getGlobalBounds() const {
    return sprite.getGlobalBounds();
}

void Bola::draw(sf::RenderWindow& ventana) const {
    ventana.draw(sprite);
}
