#include <string>

class Cuenta {
    private: //Atributos
        string beneficiario;
        string numCuenta;
        float saldo;
        

    public: //Metodos
        Cuenta(string,string,float); //Constructor1
        Cuenta(string,string); //Constructor2
        void entrar ();
        void salir ();
        void consultar ();

        //Getters
        string getBenef(){
            return beneficiario;
        }

        string getNumCuenta(){
            return numCuenta;
        }

        float getSaldo(){
            return saldo;
        }


        //Setters
        void setBenef(string benef){
            beneficiario = benef;
        }

        void setNumCuenta(string num_cuenta){
            numCuenta = num_cuenta;
        }
        
        void setSaldo(float _saldo){
            saldo = _saldo;
        }

};

//Constructor 1
Cuenta::Cuenta(string benefC, string numCuentaC, float saldoC){
    beneficiario = benefC;
    numCuenta = numCuentaC;
    saldo = saldoC;
}

//Constructor 2
Cuenta::Cuenta(string benefC, string numCuentaC){
    beneficiario = benefC;
    numCuenta = numCuentaC;
}




// Definir los metodos


void Cuenta::consultar(){
    cout<<"Usted tiene: $"<<saldo<<" en su cuenta."<<endl;
}

void Cuenta::entrar(){
    cout<<"Bienvenido, "<<beneficiario<<", nos alegra tenerte de regreso."<<endl;
}

void Cuenta::salir(){
    cout<<"Hasta luego, "<<beneficiario<<"."<<endl;
}

