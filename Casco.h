//Esta secccion esta dedicada a nuestra clase casco

#ifndef CASCO_H
#define CASCO_H
#include <string>
#include <iostream>
#include <math.h>
#include "Producto.h"
using namespace std;

//Esta es una herenicia de nuestra clase producto,es por eso que debemos de colocarlo aqui.
class Casco: public Producto{
    private:
        string material;
        string color;
    public:
     Casco(string articulo_, int precio_, int cantidad_, string material_,string color_):
     Producto (articulo_, precio_ ,cantidad_){
            material = material_;
            color= color_;
        }
    //Seccion en donde colocaremos todos los getters correspondientes 
    string getMaterial();
    string getColor();
    //Seccion en donde colocaremos todos los setters correspondientes 
    void setMaterial(string);
    void setColor(string);
    void imprimirCasco();

};

void Casco::imprimirCasco(){
     cout<<"\n\t\t- . -   TICKET Bike-Store    - . -\n"<<endl;
	cout<<"\t\tEl producto casco: "<<getArticulo()<<endl;
    cout<<"\t\tPrecio: "<<getPrecio()<<endl;
    cout<<"\t\tEl material del casco es : "<<material<<endl;
    cout<<"\t\tEl color del casco  es:" <<color<<endl;
    cout<<"\t\tLa cantidad total a pagar por "<<getCantidad()<<" "<<getArticulo()<<" es de "<<getPrecio()<< endl;

}
#endif
