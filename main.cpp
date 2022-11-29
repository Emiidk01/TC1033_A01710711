#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


#include "Cuenta.h"
#include "Movimiento.h"
#include "Ingreso.h"
#include "Egreso.h"
#include "Transferencia.h"

// ----------------------------------------------------------------------------------------

int main() {
    int opcion;
    string username1, password1, titular;
    
    Cuenta account1;
    

    float monto;
    string concepto, fecha, tipoIngreso;
    Ingreso income1 (monto, concepto, fecha, tipoIngreso);

    float monto2;
    string concepto2, fecha2, tipoEgreso;
    Egreso egreso1(monto2,concepto2,fecha2,tipoEgreso);

    float monto3;
    string concepto3,fecha3,tipoEgreso2,cuentaDestino,benefDest;
    Transferencia trans1 (monto3,concepto3,fecha3,tipoEgreso,cuentaDestino,benefDest);
    



    cout<<"\tBienvenido a sus cajero virtual"<<endl;
    cout<<"\t---CREA TU CUENTA---"<<endl;
    cout<<"Username: "; cin>>username1;
    cout<<"Password: "; cin>>password1;
    cout<<"Nombre del titular: "; cin>>titular;
    
    
    cout<<"\n\nEscribe el numero de la opcion que desees hacer:"<<endl;

    cout<<"\n1) Consultar saldo."<<endl;
    cout<<"2) Consultar mis datos."<<endl;     
    cout<<"3) Hacer un movimiento tipo Ingreso."<<endl;
    cout<<"4) Hacer un movimeinto tipo Egreso."<<endl;
    cout<<"5) Transferencia."<<endl;
    cout<<"6) Salir de mi cuenta."<<endl;
    cout<<"Opcion: ";
    cin>>opcion;


    switch (opcion){
        case 1:    
            account1.consultarSaldo();
            break;
        case 2: 
            account1.consultarDatos();
            break;
        case 3: 
            cout<<"\nIngresa los datos."<<endl;
            cout<<"Monto: $"; cin>>monto;
            cout<<"Concepto: "; cin>>concepto;
            cout<<"Fecha (dd/mm/aaaa): "; cin>>fecha;
            cout<<"Tipo de Ingreso: "; cin>>tipoIngreso;
            income1.mostrarIngreso();
            
            break;
        case 4:
            cout<<"\nIngresa los datos."<<endl;
            cout<<"Monto: $"; cin>>monto;
            cout<<"Concepto: "; cin>>concepto;
            cout<<"Fecha (dd/mm/aaaa): "; cin>>fecha;
            cout<<"Tipo de Egreso: "; cin>>tipoEgreso;
            egreso1.mostrarEgreso();
            
            break;
        case 5:
            cout<<"\nIngresa los datos."<<endl;
            cout<<"Monto: $"; cin>>monto;
            cout<<"Concepto: "; cin>>concepto;
            cout<<"Fecha (dd/mm/aaaa): "; cin>>fecha;
            cout<<"Tipo de Egreso: "; cin>>tipoEgreso;
            cout<<"Cuenta Destino: "; cin>>cuentaDestino;
            cout<<"Beneficiario Destino: "; cin>>benefDest;
            trans1.mostrarTransferencia();
            
            break;
        case 6:
            account1.setBeneficiario(titular);
            account1.salir();
            break;
        }
    

    system("pause");
    return 0;
}
  
