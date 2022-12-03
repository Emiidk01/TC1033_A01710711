#ifndef CUENTA_H
#define CUENTA_H

#include "Movimiento.h"
#include "Ingreso.h"
#include "Egreso.h"

#include <iostream>
using namespace std;

class Cuenta {
    private: //Atributos
        string beneficiario;
        float saldo = 0;
        string numCuenta = "000001";
        Ingreso ingreso1;
        Egreso egreso1;
        
        
    public: //Metodos
        //Constructores
        Cuenta(); 
        Cuenta(string); 
        Cuenta(float, Ingreso);
        Cuenta(float, Egreso);
        
        //Setters
        void setBeneficiario(string);
        void setSaldo (float);
        void setNumCuenta (string);
    
        //Getters
        string getBeneficiario();
        float getSaldo();
        string getNumCuenta(); 
        
        //Metodos de la Clase
        void consultarDatos(); 
        float sumarCuenta();
        float restarCuenta();
        void salir ();

      
};

//Constructores para Cuenta

Cuenta::Cuenta(){
    saldo = 0;
}

Cuenta::Cuenta(string _benef){
    beneficiario = _benef;
}

Cuenta::Cuenta(float _saldo, Ingreso _ingreso){
    saldo = _saldo;
    ingreso1 = _ingreso;
}

Cuenta::Cuenta(float _saldo, Egreso _egreso){
    saldo = _saldo;
    egreso1 = _egreso;
}


//Setters
void Cuenta::setBeneficiario(string b){
    beneficiario = b;
}

void Cuenta::setSaldo(float sa){
    saldo = sa;
}

void Cuenta::setNumCuenta(string nc){
    numCuenta = nc;   
}


//Getters
string Cuenta::getBeneficiario(){
    return beneficiario;
}

float Cuenta::getSaldo(){
    return saldo;
}

string Cuenta::getNumCuenta(){
    return numCuenta;
}


//Metodos


//Para consultar los datos de la cuenta (beneficiario y numero de cuenta)//
void Cuenta::consultarDatos(){
    cout<<"\n\t\tBeneficiario: "<<beneficiario<<"\n"<<"\t\tNo. de Cuenta: "<<numCuenta<<"\n"<<endl;
}

//Metodo Sumar Cuenta
float Cuenta::sumarCuenta(){
    saldo = saldo + ingreso1.getMonto();
    return saldo;
}

//Metodo Restar Cuenta
float Cuenta::restarCuenta(){
    saldo = saldo - egreso1.getMonto();
    return saldo;
}

//Metodo salir 
void Cuenta::salir(){
    cout<<"\t\t----------------- Hasta luego, "<<beneficiario<<". ----------------"<<endl;
}

//FIN 

#endif