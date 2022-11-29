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

        //Setters
        void setMonto(float);
        void setConcepto(string);
        void setFecha(string);
        //Getters
        float getMonto();
        string getConcepto();
        string getFecha();
        
};

//Constructor Clase Movimiento
Movimiento::Movimiento(float _monto ,string _concepto,string _fecha){
    monto = _monto;
    concepto = _concepto;
    fecha = _fecha;
} 

#endif