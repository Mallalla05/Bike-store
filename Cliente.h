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
        string contraseña;
    public: 
    Cliente() : nombre(""), apellido(""), equipo(""), email(""), contraseña("") {}
    Cliente (string nombre_, string apellido_, string equipo_,string email_,string contraseña_) {
        nombre = nombre_;
        apellido = apellido_;
        equipo = equipo_;
        email=email_;
        contraseña=contraseña_;
    }
    //Seccion en donde colocaremos todos los getters correspondientes 
    string getNombre();
    string getApellidoPaterno();
    string getEquipo();
    //Seccion en donde colocaremos todos los setters correspondientes 
    void setNombre(string);
    void setApellidoPaterno(string);
    void setEquipo(string);
    void imprimirInfo();
    bool access(string,string);
};

string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellidoPaterno(){
    return apellido;
}
string Cliente::getEquipo(){
    return equipo;

}
void Cliente::setNombre(string nombre_){
    nombre = nombre_;
}
void Cliente::setApellidoPaterno(string apellido_){
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

bool Cliente:: access (string email_,string contraseña_){
    if (email_==email && contraseña_==contraseña)
    return true;
return false;

}
#endif
