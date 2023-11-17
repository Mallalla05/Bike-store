#ifndef REFACCION_H
#define REFACCION_H

#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

class Refaccion : public Bicicleta {
public:
    Refaccion(std::string modelo, double precio, std::string nombre);
    void mostrarDetalles();

private:
    std::string nombre;
};

#endif 