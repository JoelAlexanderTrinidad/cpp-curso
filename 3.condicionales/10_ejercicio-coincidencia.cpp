/* Condicionales */
/*
	8. Escribe un programa que lea de la entrada est�ndar tres n�meros. Despu�s
	debe leer un cuarto n�mero e indicar si el n�mero coincide con alguno de los
	introducidos con anterioridad.
*/

#include <iostream>

using namespace std;

int main(){
	int num1, num2, num3,num4;
	cout<<"Ingrese tres numeros: \n";
	cin>>num1>>num2>>num3;
	cout<<"\nIngrese un cuarto numero: "; cin>>num4;
	
	if((num4==num1) || (num4==num2) || (num4==num3)){
		cout<<"\nEl numero "<<num4<<" coincide con uno de los numeros";
		return 0;
	}
	cout<<"\nNo coincide con ninguno :c";
	
	
	
	return 0;
}
