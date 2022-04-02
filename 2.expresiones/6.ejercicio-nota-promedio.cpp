/* Expresiones */
/* Ejercicio 6:
	Escriba un programa que lea la nota final de tres alumnos y calcule 
	la nota final media de los cuatro alumnos*/
	
#include <iostream>

using namespace std;

int main(){
	float nota1, nota2, nota3, promedio;
	
	cout<<"Ingrese nota 1: "; cin>>nota1;
	cout<<"Ingrese nota 2: "; cin>>nota2;
	cout<<"Ingrese nota 3: "; cin>>nota3;
	
	promedio = (nota1+nota2+nota3)/3;
	cout.precision(2);
	
	cout<<"\nLa nota promedio de los tres alumnos es de: "<<promedio;
	
	
	return 0;
}
