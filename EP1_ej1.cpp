#include <iostream>
#include <stdlib.h>
#include <string> 

using namespace std;

int main (){
	
	int dia;
	
	cout << "Ingrese el numero del dia de la semana (Del 1 al 7): \n";
	cin >> dia;
	
//Validacion que los dias estan dentro del rango de la semana
	if(dia>= 1 && dia<=7){
	
	switch (dia){
		case 1:
			cout << "El dia equivalente es a Lunes.\n";
			break;
		case 2:
			cout << "El dia equivalente es a Martes.\n";
			break;
		case 3:
			cout << "El dia equivalente es a Miercoles.\n";
			break;		
		case 4:
			cout << "El dia equivalente es a Jueves.\n";
			break;		
		case 5:
			cout << "El dia equivalente es a Viernes.\n";
			break;		
		case 6:
			cout << "El dia equivalente es a Sabado.\n";
			break;
		case 7:
			cout << "El dia equivalente es a Domingo.\n";
			break;
		}
 }else{
//Mensaje para avisar que el numero es invalido
    cout << "Error: Debe ser un numero entre 1 al 7.";
    }
	return 0;
	
}

