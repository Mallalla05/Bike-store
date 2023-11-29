
#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Cliente.h"
#include "Producto.h"
#include "Bicicleta.h"
#include "Casco.h"
using namespace std;

class Ticket{
    private: 
        string numeroRegistro;
        vector<Producto> productos;
    public:
    // Constructor por parametros
    // El vector productos se inicializo como un vector vacio
    // Agregacion
    Ticket(){}
    Ticket (string numeroRegistro_){
           numeroRegistro = numeroRegistro_;
    }
    //Seccion en donde colocaremos todos los getters correspondientes 
    string getnumeroRegistro();
    //Seccion en donde colocaremos todos los setters correspondientes 
    void setnumeroRegistro(string);
    void agregarProducto(Producto);
    void imprimirProductos();
    float precioTicket();
};
string Ticket::getnumeroRegistro(){
    return numeroRegistro;
}
void Ticket::setnumeroRegistro(string numeroRegistro_){
    numeroRegistro = numeroRegistro_;
}
//Agrega los productos que desees siempre y cuando se use esta funcion
void Ticket::agregarProducto(Producto nuevo_producto){
    productos.push_back(nuevo_producto);
}
float Ticket::precioTicket(){
    float precio_total = 0;
    for (int i =0; i <productos.size();i++){
        precio_total += productos[i].precioFinal();
    }
    return precio_total;
}
void Ticket::imprimirProductos(){
   for (int i=0;i<productos.size();i++){
   }
}

#endif
