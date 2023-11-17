#ifndef ACCESORIO_h
#define ACCESORIO_h

#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

class Accesorio : public Bicicleta {
public:
    Accesorio(std::string modelo, double precio, std::string tipo);
    void mostrarDetalles();

private:
    std::string tipo;
};

#endif