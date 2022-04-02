/* Condicionales */
/*
	3.Reaclice un programa que lea un valor entero y determine si se trata 
	de un número par o impar.
*/

#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero: "; cin>> num;
	
	if(num % 2 == 0){
		cout<<"\nEs par";
	}
	else{
		cout<<"\nEs impar";
	}
	
	return 0;
}
