#include <iostream>
#include <string>
using namespace std;

class Ingreso {
    private: //Atributos (Heredados por Clase Movimiento)
        float monto;
        string concepto;
        string fecha;

    public: //Metodos
        Ingreso(); //Constructor 

        //Metodos de la clase cuenta 
        
        void depositarCuenta();

        //Metodos contructores y modificadores  
        void setMonto(float);
        void setConcepto(string);
        void setFecha(string);

        float getMonto();
        string getConcepto();
        string getFecha();
};

//Constructor 1

Ingreso::Ingreso(){
}

//Establecer valores a los atributos 

void Ingreso::setMonto(float m){
    monto = m;
}

void Ingreso::setConcepto(string co){
    concepto = co;
}

void Ingreso::setFecha(string fe){
    fecha = fe;
}

float Ingreso::getMonto(){
    return monto;
}

string Ingreso::getConcepto(){
    return concepto;
}

string Ingreso::getFecha(){
    return fecha;
}


//Definir los metodos

void Ingreso::depositarCuenta(){


}

