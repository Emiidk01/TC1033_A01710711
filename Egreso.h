#ifndef EGRESO_H
#define EGRESO_H


#include <iostream>
#include "Movimiento.h"
using namespace std;

class Egreso : public Movimiento{
    protected: //Atributos (Heredados por Clase Movimiento)
       string tipoEgreso;
    public: //Metodos
        Egreso(float,string,string,string); //Constructor 

        //Metodos de la clase cuenta 
        void mostrarEgreso();

};

//Constructor Egreso
Egreso::Egreso(float _monto,string _concepto,string _fecha,string _tipoEgreso) :
Movimiento ( _monto, _concepto, _fecha){
    tipoEgreso = _tipoEgreso;
}



//Metodo mostrar Ingreso

void Egreso::mostrarEgreso(){
    cout<<"\nEgreso de tu cuenta exitoso!"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Tipo de Egreso: "<<tipoEgreso<<endl;
}

#endif