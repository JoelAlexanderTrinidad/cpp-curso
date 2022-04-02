/* Condicionales */
/*
	9. Mostrar los meses del año, pidiéndole al usuario un numero entre
	(1-12), y mostrar el mes al que corresponde.
*/

#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero del 1 al 12: "; cin>>num;
	cout<<endl;
	/* con un switch */

	switch(num){
		case 1:
			cout<<"Enero";
			break;
		case 2:
			cout<<"Febrero";
			break;
		case 3:
			cout<<"Marzo";
			break;
		case 4:
			cout<<"Abril";
			break;
		case 5:
			cout<<"Mayo";
			break;
		case 6:
			cout<<"Junio";
			break;
		case 7:
			cout<<"Julio";
			break;
		case 8:
			cout<<"Agosto";
			break;
		case 9:
			cout<<"Septiembre";
			break;
		case 10:
			cout<<"Octubre";
			break;
		case 11:
			cout<<"Noviembre";
			break;
		case 12:
			cout<<"Diciembre";
			break;
		default:
			cout<<"No corresponde a ningun mes";		
	}
	
	/* con un if/else */
	/*
	if(num==1){
		cout<<"Enero";
	}
	else if(num==2){
		cout<<"Febrero";
	}
	else if(num==3){
		cout<<"Marzo";
	}
	else if(num==4){
		cout<<"Abril";
	}
	else if(num==5){
		cout<<"Mayo";
	}
	else if(num==6){
		cout<<"Junio";
	}
	else if(num==7){
		cout<<"Julio";
	}
	else if(num==8){
		cout<<"Agosto";
	}
	else if(num==9){
		cout<<"Septiembre";
	}
	else if(num==10){
		cout<<"Octubre";
	}
	else if(num==11){
		cout<<"Noviembre";
	}
	else if(num==12){
		cout<<"Diciembre";
	}
	else{
		cout<<"No pertenece a ningun mes";
	}*/
	
	
	
	
	
	return 0;
}
