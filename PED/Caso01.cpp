#include <iostream>
#include <string>
using namespace std;

// Estructura para representar un archivo
struct Tarchivo {
    string nombreArchivo;
    int tamanoByte;
};

// Estructura para representar una carpeta que puede contener archivos y subcarpetas
struct Tcarpeta {
    string nombreCarpeta;
    int cantidadArchivos;
    int cantidadCarpetas;
    Tarchivo archivos[5];
    Tcarpeta* carpetas[5];
};

// Funcion para registrar una carpeta y sus elementos (archivos y subcarpetas)
void leerCarpeta(Tcarpeta* c) {
    cin.ignore();
    cout << "Ingrese un nombre para su carpeta: ";
    getline(cin, c->nombreCarpeta);

    cout << "Ingrese la cantidad de archivos que tendra la carpeta " << c->nombreCarpeta << ": ";
    cin >> c->cantidadArchivos;
    cin.ignore();

    // Validacion para maximo 5 archivos
    if (c->cantidadArchivos > 5) {
        cout << "Maximo 5 archivos. Se asignaran solo 5." << endl;
        c->cantidadArchivos = 5;
    }

    // Registro de los archivos
    for (int j = 0; j < c->cantidadArchivos; j++) {
        cout << "Nombre del archivo " << j + 1 << ": ";
        getline(cin, c->archivos[j].nombreArchivo);
        cout << "Tamano del archivo (en bytes): ";
        cin >> c->archivos[j].tamanoByte;
        cin.ignore();
    }

    cout << "Ingrese la cantidad de subcarpetas que tendra la carpeta " << c->nombreCarpeta << ": ";
    cin >> c->cantidadCarpetas;
    cin.ignore();

    // Validacion para maximo 5 subcarpetas
    if (c->cantidadCarpetas > 5) {
        cout << "Maximo 5 subcarpetas. Se asignaran solo 5." << endl;
        c->cantidadCarpetas = 5;
    }

    // Llamada recursiva para leer las subcarpetas
    for (int i = 0; i < c->cantidadCarpetas; i++) {
        c->carpetas[i] = new Tcarpeta;
        cout << "\nRegistrando subcarpeta #" << i + 1 << ":\n";
        leerCarpeta(c->carpetas[i]);
    }

    cout << "\nSe completo el registro de la carpeta: " << c->nombreCarpeta << "\n";
}

// Funcion para mostrar de forma recursiva el contenido de una carpeta
void escribirCarpeta(Tcarpeta* c) {
    cout << "\nCarpeta: " << c->nombreCarpeta << "\n";
    cout << "Cantidad de archivos: " << c->cantidadArchivos << "\n";
    for (int i = 0; i < c->cantidadArchivos; i++) {
        cout << "  - Archivo: " << c->archivos[i].nombreArchivo << " (" << c->archivos[i].tamanoByte << " bytes)\n";
    }

    for (int i = 0; i < c->cantidadCarpetas; i++) {
        escribirCarpeta(c->carpetas[i]);
    }
}

// Funcion recursiva para calcular el tamano total de una carpeta
int tamanoT(Tcarpeta* c) {
    int suma = 0;

    for (int i = 0; i < c->cantidadArchivos; i++) {
        suma += c->archivos[i].tamanoByte;
    }

    for (int i = 0; i < c->cantidadCarpetas; i++) {
        suma += tamanoT(c->carpetas[i]);
    }

    return suma;
}

// Funcion que imprime el menu de opciones
void imprimirMenu() {
    cout << "\n====== MENU ======\n";
    cout << "1. Registrar Carpeta\n";
    cout << "2. Mostrar carpetas registradas\n";
    cout << "3. Calcular tamano total de la carpeta\n";
    cout << "4. Salir\n";
    cout << "==================\n";
    cout << "Seleccione una opcion: ";
}

// Funcion principal
int main() {
    Tcarpeta* carpetaInicial = new Tcarpeta; // Carpeta raiz
    int opcion = 0;

    while (opcion != 4) {
        imprimirMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                leerCarpeta(carpetaInicial);
                break;

            case 2:
                escribirCarpeta(carpetaInicial);
                break;

            case 3:
                cout << "\nTamano total de la carpeta '" << carpetaInicial->nombreCarpeta << "': "
                     << tamanoT(carpetaInicial) << " Bytes\n";
                break;

            case 4:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    }

    return 0;
}