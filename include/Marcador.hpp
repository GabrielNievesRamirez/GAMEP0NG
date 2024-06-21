#ifndef MARCADOR_HPP
#define MARCADOR_HPP

#include <SFML/Graphics.hpp>

class Marcador {
private:
    sf::Text texto;
    sf::Font fuente;
    int puntos;

public:
    Marcador();
    void setPosition(float x, float y);
    void setFont(const sf::Font& font);
    void setCharacterSize(unsigned int size);
    void setString(const std::string& str);
    void draw(sf::RenderWindow& ventana) const;
    // Otros métodos que puedas necesitar
};

#endif // MARCADOR_HPP
