#include <iostream>
#include <string>
using namespace std;

#include "Cuenta.h"
#include "Ingreso.h"
#include "Egreso.h"


int main(){
    
    // Variables para el 1er Objeto
    string nombre, num_cuenta;
    int opc;
    float saldo;

    // Variables para el 2do Objeto 
    float montoIngreso;
    string conceptoIngreso;

    //Variables para el 3er Objeto
    float montoEgresos;
    string conceptoEgreso;
    string cuenta_destino;

// ---------------- PRIMER OBJETO ---------------------------------------
     

    cout<<"\tBienvenido a su banca virtual"<<endl;
    
    cout<<"Ingresa tu nombre: "; cin>>nombre;
    cout<<"Ingresa tu numero de cuenta (cualquier numero por el momento): "; cin>>num_cuenta;
    cout<<"Ingresa la cant. de dinero con el que deseas abrir la cuenta: $"; cin>>saldo;

    //Creo el 1er Objeto (Clase Cuenta)
    Cuenta ahorro (nombre,num_cuenta,saldo);

    cout<<"Tus acciones"<<endl;
    cout<<"1. Entrar"<<endl;
    cout<<"2. Consultar saldo"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Elige: "; cin>>opc;

    switch(opc){
        case 1: 
        ahorro.entrar();
        break;
        case 2:
        ahorro.consultar();
        break;
        case 3:
        ahorro.salir();
        break;
        default:
        cout<<"No valido :/";
        break;
    }

//---------------- SEGUNDO OBJETO --------------------------------------------------



    cout<<"\nIngresa el monto que quieres depositar a tu cuenta: $"; cin>>montoIngreso;
    cout<<"Agrega el concepto de ese movimiento: "; cin>>conceptoIngreso;

    // Creamos 2do Objeto (Clase Ingreso)
    Ingreso bono (montoIngreso,conceptoIngreso);
    bono.deposito();


//---------------------- TERCER OBJETO ------------------------------------------------------

    cout<<"\nIngresa el monto que deseas transferir: $"; cin>>montoEgresos;
    cout<<"Agrega el concepto de la transferencia: "; cin>>conceptoEgreso;
    cout<<"Escribe el nombre de la persona a quien transfieres: "; cin>>cuenta_destino;

    //Creamos el 3er Objeto (Clase Egresos)
    Egreso transferencia (montoEgresos,conceptoEgreso,cuenta_destino);
    transferencia.transferir();











return 0;
}
  
