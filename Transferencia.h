#include <iostream>
#include <string>
using namespace std;

class Transferencia{
private:
    //Atributos heredados por Egreso
    float monto;
    string concepto;
    string fecha;
    //Atributos propios
    string cuentaDestino;
    string beneficiarioDestino;

public:
        Transferencia(); //Constructor 

        //Metodos de la clase cuenta 
        
        void retirarCuenta();

        //Metodos contructores y modificadores  
        void setMonto(float);
        void setConcepto(string);
        void setFecha(string);

        float getMonto();
        string getConcepto();
        string getFecha();

        //De los atributos propios
        void setCuentaDestino(string);
        void setBeneficiarioDestino(string);

        string getCuentaDestino();
        string getBeneficiarioDestino();


  


};

//Constructor 

Transferencia::Transferencia(){
}

//Establecer valores a los atributos 

void Transferencia::setMonto(float m){
    monto = m;
}

void Transferencia::setConcepto(string co){
    concepto = co;
}

void Transferencia::setFecha(string fe){
    fecha = fe;
}

float Transferencia::getMonto(){
    return monto;
}

string Transferencia::getConcepto(){
    return concepto;
}

string Transferencia::getFecha(){
    return fecha;
}


// Establecer valores a los atributos propios
void Transferencia::setCuentaDestino(string cd){
    cuentaDestino = cd;
}


void Transferencia::setBeneficiarioDestino(string bd){
    beneficiarioDestino = bd;
}

string Transferencia::getCuentaDestino(){
    return cuentaDestino;
}

string Transferencia::getBeneficiarioDestino(){
    return beneficiarioDestino;
}




//Definir los metodos

void Transferencia::retirarCuenta(){


}
