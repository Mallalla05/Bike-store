#include "Accesorio.h"
#include <iostream>

Accesorio::Accesorio(std::string modelo, double precio, std::string tipo)
    : Bicicleta(modelo, precio), tipo(tipo) {}

void Accesorio::mostrarDetalles() {
    Bicicleta::mostrarDetalles();
    std::cout << "Tipo de accesorio: " << tipo << std::endl;
}