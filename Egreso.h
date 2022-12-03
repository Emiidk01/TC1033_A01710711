#ifndef EGRESO_H
#define EGRESO_H

#include "Movimiento.h"

#include <iostream>
using namespace std;

class Egreso : public Movimiento{
    protected: //Atributos
    //Atributos (Heredados por Clase Movimiento)
    string tipoEgreso;
    string cuentaDestino;
    string beneficiarioDestino;


    public: //Metodos
        //Constructores
        Egreso();
        Egreso(float,string,string,string); //Constructor 
        Egreso(float,string,string,string,string,string);

        //Setters
        void setTipoEgreso(string);
        void setCuentaDestino(string);
        void setBenefDestino(string);

        //Getters
        string getTipoEgreso();
        string getCuentaDestino();
        string getBenefDestino();

        //Metodos de la Clase
        void mostrarEgreso();
        void mostrarTransferencia();


};

//Constructores para Egreso
Egreso::Egreso(){
}


Egreso::Egreso(float _monto,string _concepto,string _fecha,string _tipoEgreso) :
Movimiento ( _monto, _concepto, _fecha){
    tipoEgreso = _tipoEgreso;
}

Egreso::Egreso(float _monto,string _concepto,string _fecha,string _tipoEgreso, string _cuentDest ,string _benefDest):
Movimiento ( _monto, _concepto, _fecha){
    
    cuentaDestino = _cuentDest;
    beneficiarioDestino = _benefDest;

}

//Setters
void Egreso::setTipoEgreso(string _tipoEgreso){
    tipoEgreso = _tipoEgreso;
}

void Egreso::setCuentaDestino(string _cuentaDes){
    cuentaDestino = _cuentaDes;
}


void Egreso::setBenefDestino(string _benefDes){
    beneficiarioDestino = _benefDes;
}



//Getters
string Egreso::getTipoEgreso(){
    return tipoEgreso;
}


string Egreso::getCuentaDestino(){
    return cuentaDestino;
} 

string Egreso::getBenefDestino(){
    return beneficiarioDestino;
}





//Metodos 

//Metodo Mostrar Egreso
void Egreso::mostrarEgreso(){
    cout<<"\n\t\tEgreso de tu cuenta exitoso!\n"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Tipo de Egreso: "<<tipoEgreso<<endl;
}

//Metodo mostrar Tranferencia
void Egreso::mostrarTransferencia(){
    cout<<"\n\t\tTransferencia exitosa!\n"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Tipo de Transferencia: "<<tipoEgreso<<endl;
    cout<<"Cuenta destino: "<<cuentaDestino<<endl;
    cout<<"Beneficiario destino: "<<beneficiarioDestino<<endl;

}


//FIN

#endif