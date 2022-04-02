/* Expresiones */
/* Ejercicio 7: La calificación final de un estudiante es el promedio
de tres notas:
-La nota de prácticas que cuenta un 30% del total.
-La nota teórica que cuenta un 60%.
-La nota de participación que cuenta el 10% restarnte.

Escriba un programa que lea las tres notas del alumno y
escriba su nota final.
*/

#include <iostream>

using namespace std;

int main(){
	float practica, teorica, participacion, notaFinal;
	
	cout<<"Ingrese la nota de practica: "; cin>>practica;
	cout<<"Ingrese la nota de teorica: "; cin>>teorica;
	cout<<"Ingrese la nota de participacion: "; cin>>participacion;
	
	/* Es lo mismo que escribir:
	practicas = practicas * 0.30;
	*/
	practica *= 0.30; // el 30% de la practica
	teorica *= 0.60; // el 60% de la teorica
	participacion *= 0.10; // el 60% de la restante
	
	notaFinal = practica + teorica + participacion;
	
	cout<<"\nLa nota final es: "<<notaFinal;
	
	return 0;
}
