#include "Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(std::string modelo, double precio) : modelo(modelo), precio(precio) {}

Bicicleta::~Bicicleta() {}

void Bicicleta::mostrarDetalles() {
    std::cout << "Modelo: " << modelo << ", Precio: " << precio << std::endl;
}