#ifndef TRANSFERENCIA_H
#define TRANSFERENCIA_H

#include <iostream>
#include "Egreso.h"
using namespace std;

class Transferencia : public Egreso{
    private: //Atributos (Heredados por Clase Egreso)
        string cuentaDestino;
        string beneficiarioDestino;

    public: //Metodos
        Transferencia(float,string,string,string,string,string); //Constructor 

        //Metodos de la clase cuenta 
        void mostrarTransferencia();

};

//Constructor Transferencia
Transferencia::Transferencia(float _monto,string _concepto,string _fecha,string _tipoEgreso, string _cuentDest ,string _benefDest) :
Egreso (_monto,_concepto,_fecha, _tipoEgreso) {

    cuentaDestino = _cuentDest;
    beneficiarioDestino = _benefDest;

}

//Metodo mostrar Egreso
void Transferencia::mostrarTransferencia(){
    cout<<"\nTransferencia exitosa!"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Tipo de Transferencia: "<<tipoEgreso<<endl;
    cout<<"Cuenta destino: "<<cuentaDestino<<endl;
    cout<<"Beneficiario destino: "<<beneficiarioDestino<<endl;

}

#endif