/* Condicionales */
/*
	10. Hacer un programa que simule un cajero automático con un saldo
	inicial de 1000 dólares.
*/

#include <iostream>

using namespace std;

int main(){
	int  opcion;
	float ingreso, retiro, saldoInicial = 1000;
	
	cout<<"Bienvenido\n";
	cout<<"\n1.Ingresar dinero";
	cout<<"\n2.Retirar dinero";
	cout<<"\n3.Ver saldo";
	cout<<"\n4.Salir";
	cout<<"\nOpcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nIngrese la cantidad de dinero que desea ingresar: ";
			cin>>ingreso;
			saldoInicial += ingreso;
			cout<<"Su nuevo saldo es: "<<saldoInicial;
			break;
		case 2:
			cout<<"\nIngrese la cantidad de dinero que desea retirar: ";
			cin>>retiro;
			if(retiro > saldoInicial){
				cout<<"No posee esa cantidad";
				return 0;
			}
			saldoInicial -= retiro;
			cout<<"Su nuevo saldo es: "<<saldoInicial;
			break;
		case 3:
			cout<<"Su saldo es: "<<saldoInicial;
			break;
		case 4:
			return 0;
		default:
			cout<<"Opcion incorrecta";
			break;
	}
	
	
	return 0;
}
