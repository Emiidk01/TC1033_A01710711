#include <iostream>
#include <string>
using namespace std;

class Egreso {
    private: //Atributos
    float monto;
    string concepto;
    string cuenta_destino;

    public: //Metodos
        Egreso(float,string); //Constructor 1
        Egreso(float,string,string); //Constructor 2 (transferencias)
        void transferir();
        void retirar();

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

Egreso::Egreso(float montoC,string conceptC){
    monto = montoC;
    concepto = conceptC;
}


//Constructor 2 (Transferencias)

Egreso::Egreso(float montoC,string conceptC,string cuentaDes){
    monto = montoC;
    concepto = conceptC;
    cuenta_destino = cuentaDes;
}


//Definir los metodos
void Egreso::retirar(){
    cout<<"Has retirado de tu cuenta la cantidad de $"<<monto<<". Por concepto de: "<<concepto<<endl;
}

void Egreso::transferir(){
    cout<<"Transferencia exitosa de $"<<monto<<" a "<<cuenta_destino<<". Por concepto de: "<<concepto<<endl;
} 

