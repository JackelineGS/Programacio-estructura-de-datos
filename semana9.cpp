
// SEMANA 9 - EJERCICIOS

// EJERCICIO 1

#include <iostream>  
using namespace std;

int a, b; // Declaramos las variables
int main(void) { 
    cout<< "Ingresa un primer número: "; 
    cin >> a; 
    cout<< "Ingresa un primer número: "; 
    cin >> b; 
    bool MCD = false;  // Declaramos que el MCD es booleano y se inicializa como falso
    if(a > 0 && b > 0 && a != b) { 
    // Debemos asegurarnos de que el primer número es el menor y el segundo el mayor 
    if (a > b ) { 
        int c = a;  
        a = b;  
        b = c; 
    } 
    // La idea es dividir el valor de a y b entre i 
    // El valor de i debe permitir una división exacta para ambos numeros. 
    // La división se realiza con el menor número ingresado y luego este disminuye hasta lograr una división exacta. 
 
    int i = a;  
        while(!MCD && i >= 1) { 
            if(a%i == 0 && b%i == 0) { 
            cout<<"El maximo comun divisor es: " << i << endl; 
            MCD = true;  
            } else { 
                i--;  
            } 
        } 
    }  
 
    else { 
if(a == b) { 
cout<<"ERROR, ingresaste dos numeros iguales" << endl; 
}  
else { 
cout<<"Ingresaste numeros incorrectos" << endl;  
} 
} 
}

// EJERCICIO 2 

#include <iostream>
using namespace std;  
// n es el numero para la factorial.
// x es la base que sera elevada a un exponente número.
// suma_parcial es la suma de la secuencia sin incluir el numero 1. 
// suma: es la suma total de la secuencia mas 1.
int n, x, suma_parcial=0, res = 1;   
float factorial = 1, suma = 0; 
int main() {
    cout<<"Ingresa el numero para el factorial y exponente: ";
    cin>>n;
    cout<<"Ingresa el numero que sera la base: ";
    cin>> x;
    
   for(int i = 1; i <= n; i++) {
       factorial = factorial * i;
       res *= x; 
       suma_parcial += res/factorial;
       suma = 1 + suma_parcial;
   } 
   cout << "El número elevado a la potencia es: " << res << endl;
   cout << "El factorial de " << n << " es igual a " << factorial << endl;
   cout<< "El resultado es: " << suma << endl; // Si bien se le declaro como flotantes sale como entero
}


// EJERCICIO 3

#include <iostream>
using namespace std; 
// Creamos dos funciones, "secuencia" nos brinde el resultado de la suma de fracciones
// Creamos "main" para solicitar el n y aplicarla en la funcion que creamos anteriormente
double secuencia (int n) {
    double suma = 0.0; // declaramos la suma como doble para que considere los decimales
    double numerador; 
    for(int i = 1; i < n; i++) {
    numerador += 1; // el numerador va ir aumentando en funcion a la cantidad de iteraciones
    suma += numerador / (i+1);
    }
    return suma;
}
 
int main() { 
    int n;
    cout<<"Ingresa un numero entero positivo: ";
    cin>>n;
    double resultado = secuencia(n);
    cout<<"La suma de las fracciones es: "<< resultado << endl;
}


// EJERCICIO 4

#include <iostream> 
using namespace std;  
int n,i, suma=0, suma_pares =0, suma_impares=0, ft; // Declaramos las variables
int main() 
{ 
  cout<<"digite el total de numeros a sumar " <<endl; // Solicitamos la cantidad para n
  cin>>n;  
  i=1;  
  while (i<=n) {  // Se crea un bucle, si i es par se activa el contador suma_pares y si no se activa el contador suma_impares
      if(i%2==0) {  
      ft= i *(-1); 
      suma_pares += ft;  
      } 
      else {  
          suma_impares  +=i; 
} 
      i++; 
  } 
  suma=suma_pares+suma_impares; // Se realiza la suma total
  cout<<"la SUMA TOTAL ES: " <<suma<<endl; 
}

// EJERCICIO 5

#include <iostream> 
using namespace std;   
int main() { 
int suma = 0;  
   for(int i = 1; i <= 10; i++) { 
       suma += i*i;  
   }  
   cout << "La suma de cuadrados de los 10 primeros enteros mayores a 0 es: "<< suma << endl; 
}

// EJERCICIO 6

#include <iostream>
using namespace std;
int main() {
    
    int numAlumnos;
    int numExamenes;
    cout<<"Ingrese el número de alumnos:"<<endl;
    cin>> numAlumnos;
  
    cout<<"Ingrese el número de examenes:"<<endl;
    cin>> numExamenes;
    int aprobaronTodos = 0;
    int aprobaronAlMenosUno = 0;
    int aprobaronUltimo = 0;
    
    for (int i = 0; i < numAlumnos; ++i) {
        bool aproboTodos = true;
        bool aproboAlMenosUno = false;
        bool aproboUltimo = false;
        
        for (int j = 0; j < numExamenes; ++j) {
            int calificacion;
            cout << "Ingrese la calificación del alumno " << i + 1 << " en el examen " << j + 1 << ": ";
            cin >> calificacion;
            if (calificacion < 11) {
                aproboTodos = false;
            } else {
                aproboAlMenosUno = true;
                if (j == numExamenes - 1) {
                    aproboUltimo = true;
                }
            }
        }
        
        if (aproboTodos) {
            ++aprobaronTodos;
        }
        if (aproboAlMenosUno) {
            ++aprobaronAlMenosUno;
        }
        if (aproboUltimo) {
            ++aprobaronUltimo;
        }
    }
    cout << "Cantidad de alumnos que aprobaron todos los exámenes: " << aprobaronTodos << endl;
    cout << "Cantidad de alumnos que aprobaron al menos un examen: " << aprobaronAlMenosUno << endl;
    cout << "Cantidad de alumnos que aprobaron únicamente el último examen: " << aprobaronUltimo << endl;
    
    return 0;
}


// EJERCICIO 7

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    char estadoCivil;
    char sexo;
    double sueldo;
    char tieneVivienda;
    int totalPersonas = 0;
    int solteros = 0, casados = 0, viudos = 0, divorciados = 0;
    int hombres = 0, mujeres = 0;
    int propietariosVivienda = 0, noPropietariosVivienda = 0;
    double totalSueldos = 0.0, promedioSueldos = 0.0;
 
    cout << "Ingrese la información de las personas (S para soltero, C para casado, V para viudo, D para divorciado):" << endl;
    cout << "Ingrese X como estado civil para terminar." << endl;
 
    while (true) {
        cout << "Estado civil: ";
        cin >> estadoCivil;
        if (estadoCivil == 'X')
            break;
 
        cout << "Sexo (M/F): ";
        cin >> sexo;
        cout << "Sueldo: ";
        cin >> sueldo;
        cout << "Tiene vivienda propia (S/N): ";
        cin >> tieneVivienda;
 
        // Contadores por estado civil
        switch (estadoCivil) {
            case 'S':
                solteros++;
                break;
            case 'C':
                casados++;
                break;
            case 'V':
                viudos++;
                break;
            case 'D':
                divorciados++;
                break;
            default:
                cout << "Estado civil no válido." << endl;
                continue;
        }
 
        // Contadores por sexo
        if (sexo == 'M')
            hombres++;
        else if (sexo == 'F')
            mujeres++;
 
        // Contadores por vivienda
        if (tieneVivienda == 'S')
            propietariosVivienda++;
        else if (tieneVivienda == 'N')
            noPropietariosVivienda++;
 
        // Cálculo del total de sueldos
        totalSueldos += sueldo;
        totalPersonas++;
    }
 
    // Cálculo del promedio de sueldos
    if (totalPersonas > 0)
        promedioSueldos = totalSueldos / totalPersonas;
 
    // Mostrar estadísticas
    cout << "\nEstadísticas de crecimiento poblacional:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total de personas: " << totalPersonas << endl;
    cout << "Solteros: " << solteros << endl;
    cout << "Casados: " << casados << endl;
    cout << "Viudos: " << viudos << endl;
    cout << "Divorciados: " << divorciados << endl;
    cout << "Hombres: " << hombres << endl;
    cout << "Mujeres: " << mujeres << endl;
    cout << "Propietarios de vivienda: " << propietariosVivienda << endl;
    cout << "No propietarios de vivienda: " << noPropietariosVivienda << endl;
    cout << fixed << setprecision(2);
    cout << "Promedio de sueldos: $" << promedioSueldos << endl;
    return 0;
}
