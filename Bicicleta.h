#ifndef BICICLETA__h
#define BICICLETA_h

#include <iostream>
#include <string>
#include "Llanta.h" 
using namespace std;

class Bicicleta {
public:
    Bicicleta(std::string modelo, double precio, std::string tipoLlanta);
    virtual ~Bicicleta();

    virtual void mostrarDetalles();

private:
    std::string modelo;
    double precio;
    Llanta llanta; 
};

#endif 