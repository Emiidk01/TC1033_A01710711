#include <iostream>
#include <string>
using namespace std;

class Ingreso {
    private: //Atributos
    float monto;
    string concepto;

    public: //Metodos
        Ingreso(float,string); //Constructor 1
        void deposito();

    //Getters 
    float getMonto(){
        return monto;
    }

    string getConcepto(){
        return concepto;
    }

    //Setters
    void setMonto(float mont){
        monto = mont;
    }

    void setConcepto (string concep){
        concepto = concep;
    }


};

//Constructor 1

Ingreso::Ingreso(float montoC,string conceptC){
    monto = montoC;
    concepto = conceptC;
}

//Definir los metodos
void Ingreso::deposito(){
    cout<<"Has depositado la cantidad de $"<<monto<<" a tu cuenta. Por concepto de: "<<concepto<<endl;
}

