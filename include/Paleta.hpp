#ifndef PALETA_HPP
#define PALETA_HPP

#include <SFML/Graphics.hpp>

class Paleta {
private:
    sf::Sprite sprite;
    sf::Texture textura;
    float velocidad;
    int contPuntos;

public:
    Paleta();
    void setPosition(float x, float y);
    void setTexture(const sf::Texture& texture);
    void move(float offsetX, float offsetY);
    sf::Vector2f getPosition() const;
    sf::FloatRect getGlobalBounds() const;
    void draw(sf::RenderWindow& ventana) const;
    void aumentarPuntos();
    int getPuntos() const;
    // Otros métodos que puedas necesitar
};

#endif // PALETA_HPP
