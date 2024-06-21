#ifndef PALETA_HPP
#define PALETA_HPP

#include <SFML/Graphics.hpp>

class Paleta {
public:
    Paleta(float x, float y, float rotacion);
    void actualizar(bool arriba, bool abajo);
    void dibujar(sf::RenderWindow& ventana);
    const sf::Sprite& getSprite() const;

private:
    sf::Texture paletaT;
    sf::Sprite paleta;
};

#endif // PALETA_HPP
