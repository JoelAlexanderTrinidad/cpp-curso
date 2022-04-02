/* Condicionales */
/*
	2. Escriba un programa que lea tres números y determine cuál de ellos
	es mayor.
*/

#include <iostream>

using namespace std;

int main(){
	int num1, num2, num3;
	
	cout<<"Ingrese 3 numeros: ";
	cin>>num1>>num2>>num3;
	
	if(num1 == num2 && num1 == num3 && num2 == num3){
		cout<<"\nLos tres numeros son iguales";
	}
	else{
		if(num1 > num2 && num1 > num3){
			cout<<"\nEl numero mayor es: "<<num1;
		}
		else if(num2 > num1 && num2 > num3){
			cout<<"\nEl numero mayor es: "<<num2;
		}
		else{
			cout<<"\nEl numero mayor es: "<<num3;
		}
	}
	
	return 0;
}
