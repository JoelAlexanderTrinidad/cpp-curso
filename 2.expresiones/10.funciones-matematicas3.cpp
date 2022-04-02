/* Expresiones */
/* Ejercicio 10:
	Escriba un programa que calcule las soluciones de una ecuación de segundo
	grado de la forma ax^2 + bx + c = 0
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,x1,x2;
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	cout<<"Ingrese c: "; cin>>c;
	
	x1 = (-b + (sqrt(pow(b,2) - (4*a*c))))/2*a;
	x2 = (-b - (sqrt(pow(b,2) - (4*a*c))))/2*a;
	
	cout<<"\nEl resultado de x1 es: "<<x1;
	cout<<"\nEl resultado de x2 es: "<<x2;
	
	return 0;
}
