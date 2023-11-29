//Esta secccion esta dedicada a nuestra clase bicicleta
#ifndef BICICLETA_H
#define BICICLETA_H
#include <string>
#include <iostream>
#include <math.h>
#include "Producto.h"
using namespace std;


//Esta es una herencia de nuestra clase producto,es por eso que debemos de colocarlo aqui.
class Bicicleta: public Producto{
    private:
        string tipo;
        float llanta;
        string color;
    public:
     Bicicleta(string articulo_, int precio_, int cantidad_, string tipo_, float llanta_,string color_):
     Producto (articulo_, precio_, cantidad_){
            tipo = tipo_;
            llanta = llanta_;
            color= color_;
        }
    //Seccion en donde colocaremos todos los getters correspondientes 
    string getTipo();
    float getLlanta();
    string getColor();
    //Seccion en donde colocaremos todos los setters correspondientes 
    void setTipo(string);
    void setLlanta(float);
    void setColor(string);
    void imprimirBicicleta();

};

void Bicicleta::imprimirBicicleta(){
     cout<<"\n\t\t - . -   TICKET Bike-Store    - . -\n"<<endl;
	cout<<"\t\tEl producto bicicleta: "<<getArticulo()<<endl;
    cout<<"\t\tPrecio: "<<getPrecio()<<endl;
    cout<<"\t\tEl tipo de bicicleta es: "<<tipo<<endl;
    cout<<"\t\tLa rodada de la bicicleta es : Rodada" <<llanta<<endl;
    cout<<"\t\tEl color de la bicicleta es:" <<color<<endl;
    cout<<"\t\tLa cantidad total a pagar por "<<getCantidad()<<" "<<getArticulo()<<" es de "<<getPrecio()<< endl;

}
#endif
