// Ejercicios
// 1. Calculadora
#include <iostream>

using namespace std; 

int A; 
int B;
int O; 
int SUMA, RESTA, MULTI;
float DIV; 

int main() {
    cout<< "Ingresa el primer nÃºmero : ";
    cin>> A;
    cout<< "Ingresa el segundo nÃºmero : ";
    cin>> B;
    cout<< "Indica el nÃºmero de operaciÃ³n a realizar (SUMA = 1, RESTA = 2, MULTIPLICACIÃN = 3, DIVISIÃN = 4): ";
    cin>> O;
    
    switch(O) {
        case 1: 
        SUMA = A + B; 
        cout<< SUMA << endl;
        break;
        case 2: 
        RESTA = A - B;
        cout<< RESTA << endl;
        break;
        case 3: 
        MULTI = A*B;
        cout<< MULTI << endl;
        break;
        case 4: 
        DIV = A/B;
        cout<< DIV << endl;
        break;
    }
}

// 2. Cuadrante del plano cartesiano

#include <iostream>

using namespace std; 

int A;
int B; 

int main() {
    cout<< "Ingresa el primer número: ";
    cin>> A; 
    cout<< "Ingresa el segundo número: ";
    cin>> B;
    
    if(A == 0 && B == 0) {
        cout<< "La coordenada está en el origen";
    } else if (A == 0 && B!= 0) {
        cout<< "Las coordenadas están en el eje Y";
    } else if (A != 0 && B == 0) {
        cout<< "Las coordenadas están en el eje X";
    } else if (A> 0 && B> 0) {
        cout<< "Las coordenadas están en el primer cuadrante";
    } else if (A<0 && B>0) {
        cout<< "Las coordenadas están en el segundo cuadrante";
    } else if (A<0 && B<0) {
        cout<< "Las coordenadas están en el tercer cuadrante";
    } else if (A>0 && B<0) {
        cout<< "Las coordenadas están en el cuarto cuadrante";
    }
}

// Cuadrante del plano cartesiano


#include <iostream>

using namespace std; 

int A;
int B; 

int main() {
    cout<< "Ingresa el primer número: ";
    cin>> A; 
    cout<< "Ingresa el segundo número: ";
    cin>> B;
    
    if(A == 0 && B == 0) {
        cout<< "La coordenada está en el origen";
    } else if (A == 0 && B!= 0) {
        cout<< "Las coordenadas están en el eje Y";
    } else if (A != 0 && B == 0) {
        cout<< "Las coordenadas están en el eje X";
    } else if (A> 0 && B> 0) {
        cout<< "Las coordenadas están en el primer cuadrante";
    } else if (A<0 && B>0) {
        cout<< "Las coordenadas están en el segundo cuadrante";
    } else if (A<0 && B<0) {
        cout<< "Las coordenadas están en el tercer cuadrante";
    } else if (A>0 && B<0) {
        cout<< "Las coordenadas están en el cuarto cuadrante";
    }
}

// Calificacion de examen
#include <iostream>

using namespace std; 

int R;

int main() {
    cout<< "Ingresa tu calificación (0 - 100): ";
    cin>> R;
    
    switch(R) {
        case 0 ... 25: 
        cout<< "Su calificación "<< R << " indica un nivel INSUFICIENTE" << endl; 
        break;
        case 26 ... 50:
        cout<< "Su resultado "<< R << " indica un nivel SUFICIENTE" << endl; 
        break;
        case 51 ... 75:
        cout<< "Su resultado "<< R << " indica un nivel BIEN" << endl; 
        break;
        case 76 ... 95:
        cout<< "Su resultado "<< R << " indica un nivel NOTABLE" << endl; 
        break;
        case 96 ... 100:
        cout<< "Su resultado "<< R << " indica un nivel SOBRESALIENTE" << endl; 
        break;
    } 
}

// Determine el mayor de tres numeros
#include <iostream>

using namespace std; 

int A;
int B;
int C;

int main() {
    cout<< "Ingresa el primer número: ";
    cin>> A;
    cout<< "Ingresa el segundo número: ";
    cin>> B;
    cout<< "Ingresa el tercer número: ";
    cin>> C;
    
    if(A>B && A>C) {
        cout<< "El número mayor es A";
    } else if (B>A && B>C) {
        cout<< "El número mayor es B";
    } else if (C>A && C>B) {
        cout<< "El número mayor es C";
    }
    
}

// Bisiesto 
#include <iostream>

using namespace std; 

int A; 

int main() {
    cout<< "Ingrese el año: ";
    cin>> A;
    
    if(A%4 == 0) {
        cout<< A <<" Es un año bisiesto" << endl;    
    } else if (A%4 == 0 && A%100 != 0 ) {
        cout<< A <<" Es un año bisiesto" << endl;
    } else if (A%100 == 0 && A%400 != 0) {
        cout<< A <<" No es un año bisiesto" << endl;
    } else if (A%100 == 0 && A % 400 == 0) {
        cout<< A <<"Es un año bisiesto" << endl;
    } else if (A%4 != 0) {
        cout<< A <<" No es un año bisiesto" << endl;
    }
    
}