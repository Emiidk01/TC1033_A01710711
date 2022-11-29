#ifndef INGRESO_H
#define INGRESO_H


#include <iostream>
#include "Movimiento.h"
using namespace std;

class Ingreso : public Movimiento{
    private: //Atributos (Heredados por Clase Movimiento)
       string tipoIngreso;
    public: //Metodos
        Ingreso(float,string,string,string); //Constructor 
        
        //Metodos de la clase cuenta 
        void mostrarIngreso();

};

//Constructor Ingreso
Ingreso::Ingreso(float _monto,string _concepto,string _fecha,string _tipoIngreso) :
Movimiento ( _monto, _concepto, _fecha){
    tipoIngreso = _tipoIngreso;
}



//Metodo mostrar Ingreso

void Ingreso::mostrarIngreso(){
    cout<<"Ingreso Hecho Exitosamente!"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Tipo de Egreso: "<<tipoIngreso<<endl;
}

#endif