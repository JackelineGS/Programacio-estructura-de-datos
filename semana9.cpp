// Ejercicios
// Ejercicio 1


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
