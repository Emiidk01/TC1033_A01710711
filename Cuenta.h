#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
using namespace std;

#include "Movimiento.h"


class Cuenta {
    private: //Atributos
        string beneficiario;
        float saldo = 0;
        string numCuenta = "000001";
        
       
    public: //Metodos
        Cuenta(); //Constructor
        Cuenta(string); //Constructor 2
        

    //Metodos de la clase Cuenta

        void consultarSaldo();
        void consultarDatos(); 
        void salir ();
    
    //Metodos constructores y modificadores
        void setBeneficiario(string);
        void setSaldo (float);
        void setNumCuenta (string);
        

        string getBeneficiario();
        float getSaldo();
        string getNumCuenta(); 

      
};

//Constructor 1

Cuenta::Cuenta(){
}

//Constructor 2 

Cuenta::Cuenta(string _benef){
    beneficiario = _benef;
}




//Establecer valores a los atributos

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




// Definir los metodos

/*Para consultar el saldo de la cuenta*/
void Cuenta::consultarSaldo(){
    cout<<"Usted tiene: $"<<saldo<<" en su cuenta."<<endl;
}

/*Para consultar los datos de la cuenta (beneficiario y numero de cuenta)*/
void Cuenta::consultarDatos(){
    cout<<"Beneficiario: "<<beneficiario<<"\n"<<"No. de Cuenta: "<<numCuenta<<"\n"<<endl;
}

//Metodo salir 
void Cuenta::salir(){
    cout<<"Hasta luego, "<<beneficiario<<"."<<endl;
}




#endif