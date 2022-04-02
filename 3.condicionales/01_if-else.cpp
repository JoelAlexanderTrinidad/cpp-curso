/* Estructuras condicionales */

#include <iostream>

using namespace std;

int main(){
	int numero, dato = 5;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	/* == es operador de igualdad. Otros operadores*/
	// != diferente
	// > mayor | >= mayor o igual
	// < menor | <= menor o igual
	if(numero == dato){
		cout<<"\nEl numero es 5";
	}
	else{
		cout<<"\nEl numero es diferente de 5";
	}
	
	return 0;
}

