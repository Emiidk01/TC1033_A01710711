#include <string>

class Cuenta {
    private: //Atributos
        string beneficiario;
        float saldo = 0;
        string numCuenta;
        
    public: //Metodos
        Cuenta(); //Constructor

    //Metodos de la clase Cuenta

        void consultarSaldo();
        void consultarDatos(); 
        void salir ();
    
    //Metodos constructores y modificadores
        void setBeneficiario(string);
        void setSaldo (float);
        void setNumCuenta (string);

        string getBeneficiario();
        float getSaldo();
        string getNumCuenta(); 
      
};

//Constructor 

Cuenta::Cuenta(){
}


//Establecer valores a los atributos

void Cuenta::setBeneficiario(string b){
    beneficiario = b;
}

void Cuenta::setSaldo(float sa){
    saldo = sa;
}

void Cuenta::setNumCuenta(string nc){
    numCuenta = nc;   
}

string Cuenta::getBeneficiario(){
    return beneficiario;
}

float Cuenta::getSaldo(){
    return saldo;
}

string Cuenta::getNumCuenta(){
    return numCuenta;
}


// Definir los metodos

/*Para consultar el saldo de la cuenta*/
void Cuenta::consultarSaldo(){
    cout<<"Usted tiene: $"<<saldo<<" en su cuenta."<<endl;
}

/*Para consultar los datos de la cuenta (beneficiario y numero de cuenta)*/
void Cuenta::consultarDatos(){
    cout<<"Beneficiario: "<<beneficiario<<"\n"<<"No. de Cuenta: "<<numCuenta<<"\n"<<endl;
}

void Cuenta::salir(){
    cout<<"Hasta luego, "<<beneficiario<<"."<<endl;
}

