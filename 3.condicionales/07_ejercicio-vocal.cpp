/* Condicionales */
/*
	5. Escriba un programa que lea de la enrada est�ndar un car�cter e indique
	en la salida est�ndar si el car�cter es una vocal min�scula o no.
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
