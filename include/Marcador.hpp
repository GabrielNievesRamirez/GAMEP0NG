#ifndef MARCADOR_HPP
#define MARCADOR_HPP

#include <SFML/Graphics.hpp>

class Marcador {
public:
    Marcador(sf::Font& fuente);
    void actualizar(int contD, int contI);
    void dibujar(sf::RenderWindow& ventana);

private:
    sf::Text cD, cI;
};

#endif // MARCADOR_HPP
