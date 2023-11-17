#ifndef CALZADO_h
#define CALZADO_h

#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

class Calzado : public Bicicleta {
public:
    Calzado(std::string modelo, double precio, std::string tipo);
    void mostrarDetalles() override;

private:
    std::string tipo;
};

#endif