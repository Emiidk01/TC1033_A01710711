#include <iostream>
#include <string>
using namespace std;

class Egreso {
    private: //Atributos (Heredados por Clase Movimiento)
        float monto;
        string concepto;
        string fecha;

    public: //Metodos
        Egreso(); //Constructor 

        //Metodos de la clase cuenta 
        
        void retirarCuenta();

        //Metodos contructores y modificadores  
        void setMonto(float);
        void setConcepto(string);
        void setFecha(string);

        float getMonto();
        string getConcepto();
        string getFecha();
};

//Constructor 

Egreso::Egreso(){
}

//Establecer valores a los atributos 

void Egreso::setMonto(float m){
    monto = m;
}

void Egreso::setConcepto(string co){
    concepto = co;
}

void Egreso::setFecha(string fe){
    fecha = fe;
}

float Egreso::getMonto(){
    return monto;
}

string Egreso::getConcepto(){
    return concepto;
}

string Egreso::getFecha(){
    return fecha;
}


//Definir los metodos

void Egreso::retirarCuenta(){


}

