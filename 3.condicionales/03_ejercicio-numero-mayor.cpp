/* Condicionales */
/*
	1. Escriba un programa que lea dos número y determine cuál de ellos es
	el mayor
*/

#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Ingrese un numero: "; cin>>num1;
	cout<<"Ingrese un numero: "; cin>>num2;
	
	if(num1 == num2){
		cout<<"\nLos numeros son iguales";
	}
	else{
		if(num1 > num2){
			cout<<"\nEl numero mayor es: "<<num1;
		}
		else{
			cout<<"\nEl numero mayor es: "<<num2;
		}
	}
	

	return 0;
}
