/* Ejercicio IVA */

/* 2. Escribir un programa que de en la entrada est�ndar, el precio de 
un producto y muestre en la salida est�ndar el precio del producto al aplicarle el IVA */
#include <iostream>

using namespace std;

int main(){
	
	float precio, iva, precioFinal;
	cout<<"Ingrese el precio de un producto: ";
	cin>>precio;
	iva = precio*0.21;
	precioFinal = precio + iva;
	cout<<"El precio final inclu�do el iva es de: "<<precioFinal;
	
	return 0;
}
