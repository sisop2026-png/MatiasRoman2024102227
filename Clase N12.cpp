#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de Estructura
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

//Registro en Archivo para ingresar datos y guardarlos con ios::app
int registrarPersonaje() {
    Personaje p;

    cout << "\nRegistrar Nuevo Personaje" << endl;
    cout << "Ingrese el nombre: ";
    cin >> ws;
    getline(cin, p.nombre);
    cout << "Ingrese la vida: ";
    cin >> p.vida;
    cout << "Ingrese el ataque: ";
    cin >> p.ataque;

    // Se abre el archivo con ofstream y el modo ios::app para agregar al final sin borrar lo existente
    ofstream archivo("personajes.txt", ios::app);

    //Valida la correcta apertura con is_open()
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo para escritura." << endl;
        return 1;
    }

    // Escribir los datos del personaje en el archivo
    archivo << p.nombre << " " << p.vida << " " << p.ataque << endl;

    //Cierra siempre el flujo con close()
    archivo.close();
    cout << "Personaje guardado correctamente en 'personajes.txt'" << endl;

    return 0;
}

//Función para leer y mostrar los personajes con ifstream y getline()
int mostrarPersonajes() {
    // Abre el archivo exclusivamente para lectura usando ifstream
    ifstream archivo("personajes.txt");

    //Valida la correcta apertura con is_open()
    if (!archivo.is_open()) {
        cout << "\nNo hay personajes registrados o el archivo aun no existe." << endl;
        return 1;
    }

    string linea;
    cout << "\nLista de Personajes Guardados" << endl;

    // Lee línea por línea hasta el final del archivo
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    //Cierra siempre el flujo con close()
    archivo.close();

    return 0;
}

// 4. Menú Interactivo en la función principal main
int main() {
    int opcion = 0;

    do {
        cout << "\nMENU PRINCIPAL" << endl;
        cout << "[1] Registrar nuevo personaje" << endl;
        cout << "[2] Ver todos los personajes guardados" << endl;
        cout << "[3] Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            registrarPersonaje();
        } else if (opcion == 2) {
            mostrarPersonajes();
        } else if (opcion == 3) {
            cout << "Saliendo del programa." << endl;
        } else {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}

