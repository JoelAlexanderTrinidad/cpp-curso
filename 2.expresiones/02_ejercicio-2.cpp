/* Expresiones */
/* Ejercicio 2 */

#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, resultado;
	
	cout<<"Ingrese el primer numero: "; cin>>a;
	cout<<"Ingrese el segundo numero: "; cin>>b;
	cout<<"Ingrese el tercer numero: "; cin>>c;
	cout<<"Ingrese el cuarto numero: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	
	return 0;
}
