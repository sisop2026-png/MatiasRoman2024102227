#include <cstdlib>
#include <iostream>
 
using namespace std;

int main(){
	const int centinela = -1;
	float nota, contador = 0, suma = 0;
	cout << "introduzca su nota. Para salir ingrese -1: ";
	cin >> nota;
	while  (nota != centinela){
		contador++;
		suma += nota;
		cout << "introduzca la siguiente nota: -1 centinela: ";
		cin >> nota;
	}	//fin de while
	if (contador >0)
		cout << "media = " << suma / contador << endl;
	else
		cout << "No hay notas \n";
	system ("PAUSE");
	return 0;
}
	
