#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H


#include <iostream>
using namespace std;

// MOVIMIENTO SERA UNA CLASE ABSTRACTA QUE SOLO SERVIRA DE CLASE PADRE PARA HEREDAR SUS ATRIBUTOS
// A LA CLASE INGRESO Y GASTO

class Movimiento {
    protected: //Atributos  
        float monto;
        string concepto;
        string fecha;

    public: //Metodos
        Movimiento (float,string,string); //Constructor de la clase Movimiento (Clase Padre)
        Movimiento ();
        Movimiento(float);

        //Setters
        void setMonto(float);
        void setConcepto(string);
        void setFecha(string);
        //Getters
        float getMonto();
        string getConcepto();
        string getFecha();

        //Metodos 
        
        
};

//Constructor Clase Movimiento
Movimiento::Movimiento(float _monto ,string _concepto,string _fecha){
    monto = _monto;
    concepto = _concepto;
    fecha = _fecha;
} 

Movimiento::Movimiento(){
    monto = 0;
}

Movimiento::Movimiento(float _monto){
    monto = _monto;
}


//Setters

void Movimiento::setMonto(float _monto){
    monto = _monto;
}

void Movimiento::setConcepto(string _concepto){
    concepto = _concepto;
}

void Movimiento::setFecha(string _fecha){
    fecha = _fecha;
} 

//Getters 

float Movimiento::getMonto(){
    return monto;
}

string Movimiento::getConcepto(){
    return concepto;
}

string Movimiento::getFecha(){
    return fecha;
}

//FIN

#endif