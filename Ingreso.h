#ifndef INGRESO_H
#define INGRESO_H

#include "Movimiento.h"


#include <iostream>
using namespace std;

class Ingreso : public Movimiento{
    private: //Atributos
    //Atributos (Heredados por Clase Movimiento)
    string procedencia;
       
    public: //Metodos
        //Constructores
        Ingreso();
        Ingreso(float,string,string,string); //Constructor 

        //Setters
        void setProcedencia (string);
        
        //Getters
        string getProcedencia();

        //Metodos de la CLase
        void mostrarIngreso();
        

};

//Constructores para Ingreso
Ingreso::Ingreso(){
}


Ingreso::Ingreso(float _monto,string _concepto,string _fecha,string _procedencia) :
Movimiento ( _monto, _concepto, _fecha){
    procedencia = _procedencia;
}

//Setters
void Ingreso::setProcedencia(string _Procedencia){
    procedencia = _Procedencia;
}

//Getters
string Ingreso::getProcedencia(){
    return procedencia;
}

//Metodos

//Metodo Mostrar Ingreso
void Ingreso::mostrarIngreso(){
    cout<<"\n\t\tIngreso Hecho Exitosamente!\n"<<endl;
    cout<<"Monto: $"<<monto<<endl;
    cout<<"Concepto: "<<concepto<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Tipo de Egreso: "<<procedencia<<endl;
}




//FIN

#endif