///Esta secccion esta dedicada a nuestra clase fecha

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


class Fecha{
	private:
		int dia;
		int mes;

	public:
        //Constructor con parametros
        Fecha (int dia_, int mes_){
            dia = dia_;
            mes = mes_;
        }
        Fecha(){
            dia = 29;
	        mes = 11;
        }
		//Seccion en donde colocaremos todos los getters correspondientes 
		int getDia();
		int getMes();
		
		//Seccion en donde colocaremos todos los setters correspondientes 
		void setDia(int);
		void setMes(int);
		void calendario();	

};

int Fecha::getDia(){
	return dia;
}
int Fecha::getMes(){
	return mes;
}
void Fecha::setDia(int dia_){
	dia = dia_;
}
void Fecha::setMes(int mes_){
	mes = mes_;
}
void Fecha::calendario(){
	cout<<"\t\tHoy "<<dia<<" de "<<mes<<" del 2023" <<endl;

}

#endif
