#include "Marcador.hpp"

Marcador::Marcador() {
    // Constructor de la clase Marcador
}

void Marcador::setPosition(float x, float y) {
    texto.setPosition(x, y);
}

void Marcador::setFont(const sf::Font& font) {
    fuente = font;
    texto.setFont(fuente);
}

void Marcador::setCharacterSize(unsigned int size) {
    texto.setCharacterSize(size);
}

void Marcador::setString(const std::string& str) {
    texto.setString(str);
}

void Marcador::draw(sf::RenderWindow& ventana) const {
    ventana.draw(texto);
}
