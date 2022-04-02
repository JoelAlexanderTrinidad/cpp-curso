/* Expresiones */
/* Ejercicio 5 :
	Escriba un fragmento de programa que intercambie los valores de dos variables*/
	
	#include <iostream>
	
	using namespace std;
	
	int main(){
		int a, b, aux;
		
		cout<<"Ingrese el valor de a: "; cin>>a;
		cout<<"Ingrese el valor de b: "; cin>>b;
		cout<<"\na = "<<a;
		cout<<"\nb = "<<b;
		
		aux = a;
		a = b;
		b = aux;
		
		cout<<"\n\nIntercambiando los valores"<<endl;
		cout<<"a = "<<a;
		cout<<"\nb = "<<b;
		
		
		
		return 0;
	}
