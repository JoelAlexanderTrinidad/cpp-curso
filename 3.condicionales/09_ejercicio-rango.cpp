/* Condicionales */
/*
	7. Escriba un programa que solicite una edad (un entero) e indique
	en la salida estándar si la edad introducida está en el ranfo [18-25]
*/

#include <iostream>

using namespace std;

int main(){
	int edad;
	cout<<"Ingrese una edad: ";
	cin>>edad;
	
	if(edad >=18 && edad <=25){
		cout<<"\nEsta en el rango [18-25]";
		return 0;
	}
	cout<<"\nNO ESTA EN EL RANGO [18-25]";	
	
	
	return 0;
}
