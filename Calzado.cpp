#include "Calzado.h"
#include <iostream>

Calzado::Calzado(std::string modelo, double precio, std::string tipo)
    : Bicicleta(modelo, precio), tipo(tipo) {}

void Calzado::mostrarDetalles() {
    Bicicleta::mostrarDetalles();
    std::cout << "Tipo de calzado: " << tipo << std::endl;
}