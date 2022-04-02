/* Expresiones */
/* Ejercicio 8:
	Escriba un programa que lea de la entrada est�ndar los dos catetos de
	un tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.
*/

#include <iostream>
#include <math.h> // para usar las funciones matem�ticas (como potencia, ra�z) llamamos a la librer�a math

using namespace std;

int main(){
	float cateto1, cateto2, hipotenusa;
	
	cout<<"Ingrese el primer cateto: "; cin>>cateto1;
	cout<<"Ingrese el segundo cateto: "; cin>>cateto2;
	
	// sqrt() es la funci�n de la ra�z cuadrada
	// pow() es la funci�n potencia
	/* 
		sqrt(pow(cateto1,2)) --> pow(cateto1,2) hace la potencia 2 al cateto2, y todo eso hace ra�z cuadrada con sqrt()
	*/
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa del triangulo es: "<<hipotenusa;
	
	return 0;
}
