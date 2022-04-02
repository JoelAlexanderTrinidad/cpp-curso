/* Ejercicio expresiones */
/* Ejercicio 1 */

#include <iostream>

using namespace std;

int main(){
	float a, b, resultado;
	
	cout<<"Ingrese el primer valor: "; cin>>a;
	cout<<"\nIngrese el segundo valor: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	/* Redondeando el resulado */
	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
