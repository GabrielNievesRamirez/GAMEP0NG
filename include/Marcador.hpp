#ifndef MARCADOR_HPP
#define MARCADOR_HPP

#include <SFML/Graphics.hpp>

class Marcador {
public:
    Marcador();
    void actualizar(int contD, int contI);
    void dibujar(sf::RenderWindow& ventana);

private:
    sf::Font fuente;
    sf::Text cD;
    sf::Text cI;
};

#endif // MARCADOR_HPP
