#ifndef ROPA_h
#define ROPA_h

#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

class Ropa : public Bicicleta {
public:
    Ropa(std::string modelo, double precio, std::string tipo);
    void mostrarDetalles();

private:
    std::string tipo;
};

#endif