/* Condicionales */
/*
	4.Comprobar si un número ingresado por el usuario es positivo o negativo
*/

#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero: "; cin>>num;
	
	if(num > 0){
		cout<<"\nEl numero es positivo";
	}
	else if(num<0){
		cout<<"\nEl numero es negativo";
	}
	else{
		cout<<"\nEl numero es cero";
	}
	
	
	return 0;
}
