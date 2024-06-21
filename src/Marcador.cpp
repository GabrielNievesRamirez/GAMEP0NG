#include <iostream> // Agregar esta línea para std::cerr
#include "Marcador.hpp"

Marcador::Marcador() {
    // Cargar la fuente por defecto de SFML
    if (!fuente.loadFromFile("arial.ttf")) {
        std::cerr << "Error al cargar la fuente" << std::endl;
        std::exit(1);
    }

    cD.setFont(fuente);
    cD.setCharacterSize(40);
    cD.setPosition(600, 25);

    cI.setFont(fuente);
    cI.setCharacterSize(40);
    cI.setPosition(200, 25);
}

void Marcador::actualizar(int contD, int contI) {
    cD.setString(std::to_string(contD));
    cI.setString(std::to_string(contI));
}

void Marcador::dibujar(sf::RenderWindow& ventana) {
    ventana.draw(cD);
    ventana.draw(cI);
}
