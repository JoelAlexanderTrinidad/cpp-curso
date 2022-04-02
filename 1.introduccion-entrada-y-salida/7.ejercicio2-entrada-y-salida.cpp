/* Entrada y salida */
/* Ejecute el programa del ejercicio anterior con entradas erróneas y observe
los resultados. Por ejemplo, intruduzca un dato de tipo carácter cuando se
espera un dato de tipo entero */


#include <iostream>

using namespace std;

int main(){
	int edad;
	char sexo;
	float altura;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su sexo: ";
	cin>>sexo;
	cout<<"Ingrese su altura: ";
	cin>>altura;
	
	cout<<"\nSu edad es: "<<edad;
	cout<<"\nSu sexo es: "<<sexo;
	cout<<"\nSu altura es: "<<altura;
	
	return 0;
}
