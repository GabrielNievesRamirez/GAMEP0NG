#ifndef BOLA_HPP
#define BOLA_HPP

#include <SFML/Graphics.hpp>

class Bola {
private:
    sf::Sprite sprite;
    sf::Texture textura;
    float velX;
    float velY;

public:
    Bola();
    void setPosition(float x, float y);
    void setTexture(const sf::Texture& texture);
    void move(float offsetX, float offsetY);
    sf::Vector2f getPosition() const;
    sf::FloatRect getGlobalBounds() const;
    void draw(sf::RenderWindow& ventana) const;
    // Otros métodos que puedas necesitar
};

#endif // BOLA_HPP
