/* Condicionales */
/*
	6. Escriba un programa que lea de la entrada estándar un carácter e
	indique en la salida estándar si el carácter es un vocal minúscula,
	es una vocal mayúscula o no es una vocal
*/

#include <iostream>

using namespace std;

int main(){
	char c;
	cout<<"Ingrese un caracter: "; cin>>c;
	
	
	/* Con un if/else */
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		cout<<"\nEs una vocal minuscula";
	}
	
	else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		cout<<"\nEs una vocal mayuscula";
	}
	
	else{
		cout<<"\nNO ES UNA VOCAL";
	}
	
	/* Con un switch */
	/*
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"\nEs una vocal minuscula";
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"\nEs una vocal mayuscula";
			break;
		default:
			cout<<"\nNO ES UNA VOCAL";
			break;
	}*/
	
	
	return 0;
}
