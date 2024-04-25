# notas_programacion
Resolución de código

```
#include <iostream>
using namespace std;

// Variables globales
int a;
int h;

// Declara funciones
int curso() {
    int p = a*h;  // statment ¿Que hace la función?
}

// Bucle principal

int main() // función principal
{
  cout<< "Ingrese la cantidad de alumnos:";    //para ver mesaje en la consola
  cin>> a;                                    // variable asociada al mensaje anterior    
  cout<< "Ingrese la cantidad de horas:";    // Count para ver un mensaje en consola
  cin>> h;
  
  cout<< "La carga del curso es:";          // mensaje que calcula el valor final
  int p = curso();                          // Invocamos la función curso 
  cout<< p;

    return 0;
}
```
