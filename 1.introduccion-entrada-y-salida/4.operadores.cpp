/* Operadores */

/* 1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división  */

#include <iostream>

using namespace std;

int main(){
	int num1, num2, suma, resta, multiplicacion, division;
	
	cout<<"Ingrese un numero: ";
	cin>>num1;
	cout<<"Ingrese otro numero: ";
	cin>>num2;
	
	suma = num1+num2;
	resta = num1-num2;
	multiplicacion = num1*num2;
	division = num1/num2;
	
	cout<<"\nLa suma es: "<<suma;
	cout<<"\nLa resta es: "<<resta;
	cout<<"\nLa multiplicacion es: "<<multiplicacion;
	cout<<"\nLa division es: "<<division;
	
	//También se puede hacer así
	/*
	cout<<"\nLa suma es: "<<num1+num2;
	cout<<"\nLa resta es: "<<num1-num2;
	cout<<"\nLa multiplicacion es: "<<num1*num2;
	cout<<"\nLa division es: "<<num1/num2;
	*/
	return 0;
}
