/* Condicionales */
/*
	5. Escriba un programa que lea de la enrada estándar un carácter e indique
	en la salida estándar si el carácter es una vocal minúscula o no.
*/

#include <iostream>

using namespace std;

int main(){
	char c;
	cout<<"Ingrese un caracter: "; cin>>c;
	
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"\nEs una vocal minuscula";
			break;
		default:
			cout<<"\nNO es una vocal minuscula";
			break;
	}
	
	/* Con un if */
	/*
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		cout<<"\nEs una vocal minuscula";
	}
	else{
		cout<<"\nNO es una vocal minuscula";
	}*/
	
	
	return 0;	
}
