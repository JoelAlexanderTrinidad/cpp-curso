/* Ejercicio 3 */

/* Realice un programa que lea de la entrada estándar los siguientes datos de una persona
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en mtrs: dato de tipo real.
 */

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
