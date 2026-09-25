#include <iostream>
#include <stdlib.h>
#include <string> 
 
 using namespace std;
 
 int main() {
 	char operacion;
 	float n1, n2;
 	
 		cout << "Ingrese el primer numero a operar (0 al 100): \n";
 		cin >> n1;
 	
 		cout << "Ingrese el operador a ejecutar (+,- ,*, /): \n";
 		cin >> operacion;
 	
 		cout << "Ingrese el segundo numero a operar (0 al 100): \n";
 		cin >> n2;
 	
 	//Control del rango de numeros solicitados
 	if (n1 > 0 && n1 < 100 && n2 > 0 && n2 < 100) {
 		
 	switch (operacion){
 		case '+':
 			cout << n1 << "+" << n2 << "=" << (n1+n2);
 			break;
		
		case '-':
 			cout << n1 << "-" << n2 << "=" << (n1-n2);
 			break;
		
		case '*':
 			cout << n1 << "*" << n2 << "=" << (n1*n2);
 			break;	
 		
		case '/':
        	cout << n1 << "/" << n2 << "=" << (n1/n2);
	 	}	
	}else{
		cout << "Solo puede ingresar numeros entre 0 y 100 para operar.";
	 }
	
 
	return 0;
 }
 
