/* Expresiones */
/* Ejercicio 8:
	Escriba un programa que lea de la entrada estándar los dos catetos de
	un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/

#include <iostream>
#include <math.h> // para usar las funciones matemáticas (como potencia, raíz) llamamos a la librería math

using namespace std;

int main(){
	float cateto1, cateto2, hipotenusa;
	
	cout<<"Ingrese el primer cateto: "; cin>>cateto1;
	cout<<"Ingrese el segundo cateto: "; cin>>cateto2;
	
	// sqrt() es la función de la raíz cuadrada
	// pow() es la función potencia
	/* 
		sqrt(pow(cateto1,2)) --> pow(cateto1,2) hace la potencia 2 al cateto2, y todo eso hace raíz cuadrada con sqrt()
	*/
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa del triangulo es: "<<hipotenusa;
	
	return 0;
}
