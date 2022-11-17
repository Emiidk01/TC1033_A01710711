#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private: //Atributos
        string username; 
        string password; 

    public: //Metodos 
        Usuario(); //Constructor

        void accederCuenta(); //Metodo

        void setUsername(string); //Setter Username
        void setPassword(string); //Setter Password
        string getUsername(); //Getter Username
        string getPassword(); //Getter Password

};

Usuario::Usuario(){
}

//Establecer valores a los atributos 

void Usuario::setUsername(string u){
    username = u;
}

void Usuario::setPassword(string p){
    password = p;
}

string Usuario::getUsername(){
    return username;
}

string Usuario::getPassword(){
    return password;
}