#include "Llanta.h"
#include <iostream>

Llanta::Llanta(std::string tipo) : tipo(tipo) {}

void Llanta::mostrarDetalles() {
    std::cout << "Tipo de llanta: " << tipo << std::endl;
}