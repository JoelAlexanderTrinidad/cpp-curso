/* Expresiones */
/* Ejercicio 3 */

#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, resultado;
	cout<<"Ingrese el valor a: "; cin>>a;
	cout<<"Ingrese el valor b: "; cin>>b;
	cout<<"Ingrese el valor c: "; cin>>c;
	cout<<"Ingrese el valor d: "; cin>>d;
	cout<<"Ingrese el valor e: "; cin>>e;
	cout<<"Ingrese el valor f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
