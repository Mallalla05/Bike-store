#include "Ropa.h"
#include <iostream>

Ropa::Ropa(std::string modelo, double precio, std::string tipo)
    : Bicicleta(modelo, precio), tipo(tipo) {}

void Ropa::mostrarDetalles() {
    Bicicleta::mostrarDetalles();
    std::cout << "Tipo de ropa: " << tipo << std::endl;
}