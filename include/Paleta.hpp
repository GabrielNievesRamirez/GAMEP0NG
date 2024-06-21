#ifndef PALETA_HPP
#define PALETA_HPP

#include <SFML/Graphics.hpp>

class Paleta {
public:
    Paleta(float posX, float posY, float rot);
    void actualizar(bool arriba, bool abajo);
    void dibujar(sf::RenderWindow& ventana);
    sf::Sprite& getSprite();

private:
    sf::Texture paletaT;
    sf::Sprite paleta;
};

#endif // PALETA_HPP
