/* Condicionales */
/*
	11. Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un número
	Caso 2: Número par o impar
	Caso 3: Salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int opcion, num, resultado;
	cout<<"## Bienvenido ##\n"<<endl;
	cout<<"1. Cubo de un numero\n";
	cout<<"2. Numero par o impar\n";
	cout<<"3. Salir\n";
	cout<<"Opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nIngrese un numero: "; cin>>num;
			resultado = pow(num,3);
			cout<<"\nEl cubo de "<<num<<" es "<<resultado;
			break;
		case 2:
			cout<<"\nIngrese un numero: "; cin>>num;
			if(num%2==0){
				cout<<"\nEl numero es PAR";
			}
			else{
				cout<<"\nEl numero es IMPAR";
			}
			break;
		case 3:
			break;
		default:
			cout<<"Opcion invalida";
			break;				
	}
	
	return 0;
}
