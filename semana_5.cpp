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

// Tipo de triangulo
#include <iostream>

using namespace std; 

int A;
int B;
int C;

int main() {
    cout<< "Ingrese la longitud del primer lado: ";
    cin>> A;
    cout<< "Ingrese la longitud del segundo lado: ";
    cin>> B;
    cout<< "Ingrese la longitud del tercer lado: ";
    cin>> C;
    
     if (A == B && A == C) {
        cout<<" El triangulo es equilatero";
    } else if (A == B || A == C || B == C) {
        cout<<" El triangulo es isóceles";
    } else if (A != B && A != C) {
        cout<<" El triangulo es escaleno";
    }
} 

// Descuento

#include <iostream>

using namespace std; 

int P; 
int C; 

int main() {
    cout<<"Ingresa el precio del producto: ";
    cin>>P; 
    cout<<"Ingresa la cantidad de productos: ";
    cin>>C;
    int T = P*C;
    
    if(C>10 && C<= 20) {
        int PF = 0.90*T;
        cout<<"El precio final es de "<< PF << endl;
    } else if(C>20) {
        int PF = 0.80*T;
        cout<<"El precio final es de "<< PF << endl;
    }
}

// Determinar si un numero es par o impar
#include <iostream>

using namespace std; 

#include <iostream>

using namespace std; 

int A;

int main() {
    cout<<"Ingrese un número: ";
    cin>> A; 
    
    if(A % 2 == 0 && A != 0) {
        cout<<"El número es PAR";
    } else if(A % 2 != 0) {
        cout<<"El número es IMPAR";
    } else if(A == 0) {
        cout<<"El valor es NULO";
    }
}


// Dia de la semana
#include <iostream>

using namespace std; 

int D;
int main() {

cout<< "Introduce un número del 1 al 7: ";
        cin>> D;
        
    switch(D){
        case 1: cout<< "El día de la semana es Lunes";
        break;
        case 2: cout<< "El día de la semana es Martes";
        break;
        case 3: cout<< "El día de la semana es Miercoles";
        break;
        case 4: cout<< "El día de la semana es Jueves";
        break;
        case 5: cout<< "El día de la semana es Viernes";
        break;
        case 6: cout<< "El día de la semana es Sabado";
        break;
        case 7: cout<< "El día de la semana es Domingo";
        break;
        default: cout<< "No es un día válido";
    }
}













   


