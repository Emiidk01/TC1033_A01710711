#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Usuario.h"
#include "Cuenta.h"
#include "Movimiento.h"
#include "Ingreso.h"
#include "Egreso.h"
#include "Transferencia.h"

// ----------------------------------------------------------------------------------------

int main(){

    // ------------ CLASE USUARIO ---------------------------------------------------------
    Usuario user1;
    user1.setUsername("Emiliano64");
    user1.setPassword("equisde123");

    cout<<"\nUsername: "<<user1.getUsername()<<"\nPassword: "<<user1.getPassword()<<endl;

    // ------------ CLASE CUENTA ----------------------------------------------------------
    Cuenta account1;
    account1.setBeneficiario("Emiliano Gomez Gonzalez");
    account1.setSaldo(48);
    account1.setNumCuenta("170804");
    
    cout<<"\nBeneficiario: "<<account1.getBeneficiario()<<"\nSaldo actual: $"<<account1.getSaldo()<<"\nNo. de Cuenta: "<<account1.getNumCuenta()<<endl;

    // ------------- CLASE INGRESO ---------------------------------------------------------

    Ingreso nomina;
    nomina.setMonto(8000);
    nomina.setConcepto("Quincena");
    nomina.setFecha("01/08/2012");
    
    cout<<"\nHas depositado a tu cuenta.\n"<<"Monto: $"<<nomina.getMonto()<<"\nConcepto: "<<nomina.getConcepto()<<"\nFecha: "<<nomina.getFecha()<<endl;
  
    // ------------- CLASE EGRESO ------------------------------------------------------------

    Egreso cargoNetflix;
    cargoNetflix.setMonto(199);
    cargoNetflix.setConcepto("Pago de Netflix");
    cargoNetflix.setFecha("10/10/2022");

    cout<<"\nSe ha cargado a tu cuenta $"<<cargoNetflix.getMonto()<<"\nConcepto: "<<cargoNetflix.getConcepto()<<"\nFecha: "<<cargoNetflix.getFecha()<<endl;


    // -------------- CLASE TRANSFERENCIA ---------------------------------------------------

    Transferencia renta;
    renta.setMonto(7500);
    renta.setConcepto("Renta del mes de Noviembre");
    renta.setFecha("28/09/2022");
    renta.setCuentaDestino("0393837261548");
    renta.setBeneficiarioDestino("Ernesto Gonzalez Miranda");

    cout<<"\nTransferencia exitosa."<<"\nMonto: $"<<renta.getMonto()<<"\nConcepto: "<<renta.getConcepto()<<"\nFecha: "<<renta.getFecha()<<"\nCuenta Destino: "<<renta.getCuentaDestino()<<"\nBeneficiario Destino: "<<renta.getBeneficiarioDestino()<<endl;





    system("pause");
    return 0;
}
  
