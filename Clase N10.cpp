#include <iostream>
#include <string>	
#include <stdlib.h>

using namespace std;

struct personaje{
	string nombre;	
	int poder;
};

int main (){
	personaje p1;
	personaje p2;
	
	p1.nombre = "Subzero";
	p1.poder = 100;
	
	p2.nombre = "Scorpion";
	p2.poder = 99;
	
	cout << "===Personajes ingresados===\n\n";
	cout << p1.nombre << " Vs. " << p2.nombre;
	cout << "\n\nPoder de fuerza: " << p1.poder <<" Vs. " << p2.poder;	

	cout << "\n\n===RESULTADO ===\n\n";

	if (p1.poder > p2.poder)
		cout << "Nadie le gana a Subzero...";
	else if (p2.poder > p1.poder)
		cout << "Spamea teleport";
	else
		cout << "Empate";

	return 0;
}
