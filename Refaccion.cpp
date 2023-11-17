#include "Refaccion.h"
#include <iostream>

Refaccion::Refaccion(std::string modelo, double precio, std::string nombre)
    : Bicicleta(modelo, precio), nombre(nombre) {}

void Refaccion::mostrarDetalles() {
    Bicicleta::mostrarDetalles();
    std::cout << "Nombre de la refacción: " << nombre << std::endl;
}