//Esta secccion esta dedicada a nuestra clase cliente

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente
{
    private:
        string nombre;
        string apellido;
        string equipo;
        string email;
        string contrasena;
    public: 
    Cliente() : nombre(""), apellido(""), equipo(""), email(""), contrasena("") {}
    Cliente (string nombre_, string apellido_, string equipo_,string email_,string contrasena_) {
        nombre = nombre_;
        apellido = apellido_;
        equipo = equipo_;
        email=email_;
        contrasena=contrasena_;
    }
    //Seccion en donde colocaremos todos los getters correspondientes 
    string getNombre();
    string getApellido();
    string getEquipo();
    //Seccion en donde colocaremos todos los setters correspondientes 
    void setNombre(string);
    void setApellido(string);
    void setEquipo(string);
    void imprimirInfo();
    bool access(string,string);
};

string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getEquipo(){
    return equipo;

}
void Cliente::setNombre(string nombre_){
    nombre = nombre_;
}
void Cliente::setApellido(string apellido_){
    apellido = apellido_;
}
void Cliente::setEquipo(string equipo_){
    equipo = equipo_;

}
void Cliente::imprimirInfo(){
    cout<<"\n\t\t-.- CLIENTE -.-\n"<<endl;
	cout<<"\t\tCliente: "<<nombre<<" "<<apellido<<endl;
    cout<<"\t\tEquipo: "<<equipo<<endl;
}

bool Cliente:: access (string email_,string contrasena_){
    if (email_==email && contrasena_==contrasena)
    return true;
return false;

}
#endif
