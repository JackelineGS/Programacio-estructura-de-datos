#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    float precio;
};

float precioTotal(Libro** libros, int filas, int columnas) {
    float total = 0;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            total += libros[i][j].precio;
        }
    }
    return total;
}

int main() {
    const int filas = 2;
    const int columnas = 3;
    
    // Crear array bidimensional de Libro
    Libro** arrayLibros = new Libro*[filas];
    for(int i = 0; i < filas; i++) {
        arrayLibros[i] = new Libro[columnas];
    }
    
    // Asignar valores sin bucles anidados
    arrayLibros[0][0] = {"El Quijote", 15.99};
    arrayLibros[0][1] = {"Cien años de soledad", 12.50};
    arrayLibros[0][2] = {"La Odisea", 10.75};
    arrayLibros[1][0] = {"Trilce", 9.99};
    arrayLibros[1][1] = {"El Principito", 8.49};
    arrayLibros[1][2] = {"La Divina Comedia", 11.25};
    
    // Mostrar libros
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Libro[" << i << "][" << j << "]: " 
                 << arrayLibros[i][j].titulo << " - s/" 
                 << arrayLibros[i][j].precio << endl;
        }
    }
    
    // Calcular precio total
    float total = precioTotal(arrayLibros, filas, columnas);
    cout << "Precio total de todos los libros: $" << total << endl;
    
    // Liberar memoria
    for(int i = 0; i < filas; i++) {
        delete[] arrayLibros[i];
    }
    delete[] arrayLibros;
    
    return 0;
}
