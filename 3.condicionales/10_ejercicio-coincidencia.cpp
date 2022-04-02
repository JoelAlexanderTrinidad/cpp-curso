/* Condicionales */
/*
	8. Escribe un programa que lea de la entrada estándar tres números. Después
	debe leer un cuarto número e indicar si el número coincide con alguno de los
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
