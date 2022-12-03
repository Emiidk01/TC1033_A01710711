#include "Cuenta.h"
#include "Movimiento.h"
#include "Ingreso.h"
#include "Egreso.h"


#define USER "emi17"
#define PASS "proyecto"


#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

//----------------------------------------------------------------------------------------
/*****************************************************************************************/
/*                                ¡MENSAJE IMPORTANTE!                                   */
/*        RECORDAR QUE PARA ACCEDER AL PROGRAMA SE REQUIERE USUARIO Y CONTRASEÑA         */
/*                                  USUARIO: emi17                                       */
/*                                 PASSWORD: proyecto                                    */
/*****************************************************************************************/
// ----------------------------------------------------------------------------------------

int main() {
    
    //Variables para la parte de LOG IN
    string usuario, password, titular;
    int contador = 0;
    bool ingresa = false;
    //Variable para Switch
    int opcion;
    

    //MIS OBJETOS
    
    //Objeto de la Clase Cuenta
    Cuenta account1;
    //Objeto de la Clase Ingreso
    Ingreso income1;
    //Objeto de la Clase Egreso
    Egreso discharge1;
    //Obejto de la Clase Transferencia
    Egreso transfer1;


   //Variable  
    float saldo = 0;

    //Variables que usa el objeto de Ingreso y Egreso
    float monto;
    string concepto, fecha, procedencia,tipoEgreso;

    //Variables que usa el objeto de Tranferencia
    string cuentaDest,benefDest;


    do {
        system("cls");
        cout<<"\t\t\t**********************************************************"<<endl;
        cout<<"\t\t\t**********************************************************"<<endl;
        cout<<"\t\t\t*************** SISTEMA DE BANCA VIRTUAL *****************"<<endl;
        cout<<"\t\t\t**********************************************************"<<endl;
        cout<<"\t\t\t**********************************************************"<<endl;
        cout<<"\t\t\t----------------------------------------------------------"<<endl;
        cout<<"\t\t\t------------ Creador: Emiliano Gomez Gonzalez ------------"<<endl;
        cout<<"\t\t\t----------------------------------------------------------"<<endl;


        cout<<"\n\t\t\t-----------------[ LOG IN DE USUARIO ]--------------------"<<endl;
        cout<<"\t\t\t----------------------------------------------------------"<<endl;
        cout<<"\n\t\t\tUsername: ";
        getline(cin,usuario);
        cout<<"\t\t\tPassword: ";
        getline(cin,password);
        cout<<"\t\t\tTitular de la cuenta: ";
        getline(cin,titular);

        if (usuario == USER && password == PASS){
            ingresa = true;
        } else{
            cout<<"\n\t\t\tSu usuario y/o password son incorrectos" <<endl;
            cin.get();
            contador ++; 
        }

    } while (ingresa == false && contador < 4);

    if (ingresa == false){
        cout<<"\n\t\tUsted no pudo ingresar. Muchos intentos"<<endl;
    } else {
        
        cout<<"\n\t\t\tBienvenido al sistema"<<endl;
        cin.get();

        do{
            
            
            system ("cls");
            cout<<"\t\t\tMENU PRINCIPAL"<<endl;
            cout<<"\t\t\t--------------"<<endl;
            cout<<"\n\t\tDigite la opcion que desee hacer"<<endl;

            cout<<"\n\t\t1) Consultar saldo."<<endl;
            cout<<"\t\t2) Consultar mis datos."<<endl;     
            cout<<"\t\t3) Hacer un movimiento tipo Ingreso."<<endl;
            cout<<"\t\t4) Hacer un movimiento tipo Egreso."<<endl;
            cout<<"\t\t5) Transferencia."<<endl;
            cout<<"\t\t6) Salir de mi cuenta."<<endl;
            cout<<"\n\t\tOpcion: ";
            cin>>opcion;


            switch (opcion){
                case 1:    
                    account1.setSaldo(saldo);
                    cout<<"\n\t\tSu saldo es de: $"<<account1.getSaldo()<<"\n"<<endl; 
                    
                    system("pause");
                    break;
                case 2: 
                    account1.setBeneficiario(titular);
                    account1.consultarDatos();
                    
                    system("pause");
                    break;
                case 3: 
                
                    cout<<"\n\t\tDigita los datos para hacer un ingreso a tu cuenta\n"<<endl;
                    cout<<"\t\tMonto: $"; cin>>monto;
                    income1.setMonto(monto);
                    cout<<"\t\tConcepto: "; cin>>concepto;
                    income1.setConcepto(concepto);
                    cout<<"\t\tFecha (dd/mm/aa): "; cin>>fecha;
                    income1.setFecha(fecha);
                    cout<<"\t\tProcedencia (Ej: Trabajo): "; cin>>procedencia;
                    income1.setProcedencia(procedencia);

                    saldo = saldo + monto;
                    cout<<"\n\t\tSu saldo ha cambiado a: $"<<saldo<<" pesos"<<endl; //Esto es parte del cambio temporal (saldo)
                    income1.mostrarIngreso();
                    
                    
                    
                    system("pause");
                    break;
                case 4:
                    
                    cout<<"\n\t\tDigita los datos para hacer un egreso a tu cuenta\n"<<endl;
                    cout<<"\t\tMonto: $"; cin>>monto;
                    discharge1.setMonto(monto);
                    cout<<"\t\tConcepto: "; cin>>concepto;
                    discharge1.setConcepto(concepto);
                    cout<<"\t\tFecha (dd/mm/aa): "; cin>>fecha;
                    discharge1.setFecha(fecha);
                    cout<<"\t\tTipo de Egreso (Ej: retiro de efectivo): "; cin>>tipoEgreso;
                    discharge1.setTipoEgreso(tipoEgreso);
            
                    if (saldo >= monto){
                        saldo = saldo - monto;
                        cout<<"\n\t\tSu saldo ha cambiado a: $"<<saldo<<" pesos"<<endl; //Esto es parte del cambio temporal (saldo)
                        discharge1.mostrarEgreso();
                    }
                    else {
                        cout<<"\n\t\tNo tienes esa cantidad."<<endl;
                    }
                    system("pause");
                    break;
                case 5:
                    
                    cout<<"\n\t\tDigita los datos para hacer la transferencia\n"<<endl;
                    cout<<"\t\tMonto: $"; cin>>monto;
                    transfer1.setMonto(monto);
                    cout<<"\t\tConcepto: "; cin>>concepto;
                    transfer1.setConcepto(concepto);
                    cout<<"\t\tFecha (dd/mm/aa): "; cin>>fecha;
                    transfer1.setFecha(fecha);
                    cout<<"\t\tTipo de Transferencia: (Ej: Personal): "; cin>>tipoEgreso;
                    transfer1.setTipoEgreso(tipoEgreso);
                    cout<<"\t\tCuenta Destino: "; cin>>cuentaDest;
                    transfer1.setCuentaDestino(cuentaDest);
                    cout<<"\t\tBeneficiario Destino: "; cin>>benefDest;
                    transfer1.setBenefDestino(benefDest);
                    if (saldo >= monto){
                        discharge1.mostrarTransferencia();
                        saldo = saldo - monto;
                        cout<<"\n\t\tSu saldo ha cambiado a: $"<<saldo<<" pesos"<<endl; 
                    }
                    else {
                        cout<<"\n\t\tLa Transferencia no puede ejecutarse porque no tienes esa cantidad."<<endl;
                    }
                    system("pause");
                    break;
                case 6:
                    system("cls");

                    account1.setBeneficiario(titular);
                    account1.salir();
                    break;
                default:
                    cout<<"\n\n\t\tUpps! Parece que pusiste un numero que no viene en la lista. Intenta de nuevo. "<<endl;
                    system("pause");
            }
        
        

        }while (opcion != 6);


        
    }
    
    
        
    system("pause");
    return 0;
}
  
