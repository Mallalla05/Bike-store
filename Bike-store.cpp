
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Ticket.h"
#include"Producto.h"
#include "Casco.h"
#include "Bicicleta.h"
#include "Cliente.h"
using namespace std;

vector <Cliente> clientes;
Cliente currentCliente;

void addUser(string nombre, string apellidoPaterno, string equipo,string email,string contrasena){
    Cliente c(nombre, apellidoPaterno, equipo, email, contrasena);
    clientes.push_back(c);
}

bool authUser(string email, string contrasena) {
    for(Cliente  cliente: clientes) {
        if(cliente.access(email, contrasena)){
            currentCliente = cliente;
            return true;
        }
    }

    return false;
}

void registerUser() {
    string nombre, apellidoPaterno, equipo, email, contrasena;
    cout << "\nProporciona el nombre: ";
    cin.ignore();
    getline(cin, nombre);
    cout << "\nProporciona el apellido paterno: ";
    getline(cin, apellidoPaterno);
    cout << "\nProporciona el equipo: ";
    getline(cin, equipo);
    cout << "\nProporciona el email: ";
    getline(cin, email);
    cout << "\nProporciona la contraseña: ";
    getline(cin, contrasena);
    addUser(nombre, apellidoPaterno, equipo, email, contrasena);
}

void menu(){ //Las opciones que tenemos para escoger en dicho programa
	
		cout<<"\n\n\n\t\t Bienvenido al portal de compras BIKE-STORE\n"<<endl;
        cout<<"\t\t 0 - Registrar cliente "<<endl;
		cout<<"\t\t 1 - Crea el ticket del primer cliente "<<endl;
		cout<<"\t\t 2 - Crea el ticket del segundo cliente "<<endl;
		cout<<"\t\t 3 - Crea el ticket del tercer cliente"<<endl;
		cout<<"\t\t Para salir presiona cualquier numero mayor a 3"<<endl;
	
}

int main() {
	
	int opcion; //variable para seleccionar la opcion 
	opcion=1;
    int continua;//variable con la cual podemos crear un codigo ciclico 
	continua=0;
	
	while(continua ==0){ //comando que permite el ciclo del programa
		menu();
		cin>>opcion;

        if (opcion == 0) {
            registerUser();
            for(Cliente cliente: clientes) {
                cout<<cliente.getNombre() << "\n";
            }
        }
        else if(opcion==1){
            string email, contrasena;

            cout << "Ingresa tu email: ";
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, email);

            cout << "Ingresa tu contrasena: ";
            getline(cin, contrasena);


            if(authUser(email, contrasena)) {
                 //Es el objeto de la clase producto
                Bicicleta bicicleta6 ("Cannodale Topstone 4",14299,13,"Gravel",29,"Gris mate");
                Casco casco24 ("Casco Aurora Sky",1559,19, "ABS duradero","Azul cielo");
                Casco casco67("Casco AeroGlide Pro",3149,6, "Fibra de vidrio y poliestireno expandido","Blanco aperlado");
                Ticket ticket1 ("959518"); //Se agrega el numero del ticket 6
                //Se arreglan los objetos del producto 
                ticket1.agregarProducto (bicicleta6);
                ticket1.agregarProducto (casco24);
                ticket1.agregarProducto (casco67);
                //Con estos obajetos saco el precio final de cada producto
                bicicleta6.precioFinal();
                casco24.precioFinal();
                casco67.precioFinal();
                bicicleta6.ticket();
                casco24.ticket();
                casco67.ticket();
                //Imprimir en pantalla los datos de los clientes
                currentCliente.imprimirInfo();
                //Imprimo el numero de folio
                cout<<"\t\tNumero de folio: "<<ticket1.getnumeroRegistro()<<endl;
            }
        }
        //Esta opcion es para demostrar que se pueden agregar mas de un 
        //producto
        else if(opcion==2){
            
            
            Bicicleta bicicleta1 ("Trek Marlin",12599,3,"MTB",27.5,"Rojo brillante");
            Bicicleta bicicleta2 ("Specialized Roubbaix Base",19999,7,"Ruta",29,"Negro satinado");
            Bicicleta bicicleta3 ("TCannodale Caad Optimo 105",17499,3,"Gravel",29,"Rojo con negro");
            //Se crea un objeto,en este caso es el cliente
            //Cliente cliente2 ("Morales", "Mariana", "ChapusBike");
            
            Ticket ticket2 ("785241");
            
            //Puedo agregar a ticket los productos que desee 
            ticket2.agregarProducto (bicicleta1);
            ticket2.agregarProducto (bicicleta2);
            ticket2.agregarProducto (bicicleta3);

            bicicleta1.precioFinal();
            bicicleta1.imprimirBicicleta();
            bicicleta2.precioFinal();
            bicicleta2.imprimirBicicleta();
            bicicleta3.precioFinal();
            bicicleta3.imprimirBicicleta();

            //Con esta funcion podemos empezar a imprimir todos nuestros tickets
            bicicleta1.ticket();
            bicicleta2.ticket();
            bicicleta3.ticket();
            currentCliente.imprimirInfo();

            
            
            cout<<"\t\tNumero de folio: "<<ticket2.getnumeroRegistro()<<endl;
        }
        else if(opcion==3){
            
            //Utilizo esta clase hija para los productos que sean unicamente de
            //comida y poder decirte las calorias y cantidad de azucar de dichos
            //productos
            Casco casco1 ("Casco Stealth",2099, 3, "Policarbonato","Negro mate");
            Casco casco2 ("Casco Titanium Ultra", 3074, 6, "Titanio y polimero de alta resistencia","Plateado metalico");
            Casco casco3 ("Casco Carbon Edge", 4199, 15, "Fibra de carbono premium ", "Negro brillante");
            
            Ticket ticket3 ("789595");
            
            ticket3.agregarProducto (casco1);
            ticket3.agregarProducto (casco2);
            ticket3.agregarProducto (casco3);
            


            casco1.precioFinal();
            casco1.imprimirCasco();
            casco2.precioFinal();
            casco2.imprimirCasco();
            casco3.precioFinal();
            casco3.imprimirCasco();
        
            casco1.ticket();
            casco2.ticket();
            casco3.ticket();
            currentCliente.imprimirInfo();


            cout<<"\t\tNumero de Registro: "<<ticket3.getnumeroRegistro()<<endl;

        }
           else{
			cout<<"Esperamos que el programa le sea eficiente y util"<<endl;
			continua = continua+1;
		}
    }
    return 0;
}

