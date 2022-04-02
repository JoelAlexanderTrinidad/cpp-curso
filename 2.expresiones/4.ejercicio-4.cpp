/* Expresiones */
/* Ejercicio  4 */

#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, resultado;
	
	cout<<"Ingrese el numero a: "; cin>>a;
	cout<<"Ingrese el numero b: "; cin>>b;
	cout<<"Ingrese el numero c: "; cin>>c;
	cout<<"Ingrese el numero d: "; cin>>d;
	
	resultado = a + (b/(c-d));
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
