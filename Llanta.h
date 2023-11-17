#ifndef LLANTA_h
#define LLANTA_h

#include <string>
#include <string>
using namespace std;

class Llanta {
public:
    Llanta(std::string tipo);
    void mostrarDetalles();

private:
    std::string tipo;
};

#endif