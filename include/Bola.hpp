#ifndef BOLA_HPP
#define BOLA_HPP

#include <SFML/Graphics.hpp>

class Bola {
public:
    Bola();
    void actualizar();
    void dibujar(sf::RenderWindow& ventana);
    void rebotar(const sf::Sprite& paletaD, const sf::Sprite& paletaI);
    sf::Sprite& getSprite();

private:
    sf::Texture bolaT;
    sf::Sprite bola;
    float velX;
    float velY;
};

#endif // BOLA_HPP
