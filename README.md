# notas_programacion
Resolución de código
Semana 5: Condicionales
Ejercicios:
1. Calculadora
Desarrolle un programa en C++ que solicite al usuario dos números y una operación a realizar entre ellos 
(suma, resta, multiplicación o división) y muestre el resultado. El programa debe ser capaz de realizar 
la operación indicada por el usuario y mostrar un mensaje de error si la operación no es válida.
Algoritmos:

2. Determinar el cuadrante en el plano cartesiano
Desarrolle un programa en C++ que solicite al usuario las coordenadas de un punto en el plano cartesiano 
y determine en qué cuadrante se encuentra. El programa debe mostrar un mensaje indicando el cuadrante 
correspondiente o si el punto se encuentra en alguno de los ejes o en el origen.
Algoritmos: 

3. Calificación de examen
Desarrolle un programa en C++ que solicite al usuario la calificación de un examen (0 a 100) y muestre si 
es insuficiente, suficiente, bien, notable o sobresaliente. El programa debe mostrar un mensaje indicando 
la calificación obtenida.
Algoritmos:


4. Determinar el mayor de tres números:Desarrolle un programa en C++ que solicite al usuario tres números 
y determine cuál de ellos es el mayor. El programa debe mostrar un mensaje indicando el número mayor.

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


```
# TERCER EJERCICIO
#include <iostream>

using namespace std; 

int C;
int T; 
int D; 

 int main() {
     cout<<"Ingrese la cantidad de horas:";
     cin>>C;
     cout<<"Ingrese la tarifa:";
     cin>>T;
     cout<<"Ingrese el descuento:";
     cin>>D; 
     if(C<40) {
         int P = C*T - D;
         cout<<P;
     } else {
         int P = 40*T + (C-40)*1.5*T-D;
         cout<<P;
     }
 }
```

```
# PRIMER EJERCICIO
#include <iostream>

using namespace std; 

int D;
string T;
int main() {
    
    cout<<"Ingrese la distancia:";
    cin>>D;
    if(D>500){
        cout<<"La distancia es:";
        string T = "grande";
    } else {
        if(D<100){
            cout<<"La distancia es:";
            string T= "pequeña";
            cout<<T;
        } else {
            cout<<"La distancia es:";
            string T = "mediana";
            cout<<T;
        }
    }
}
```


```
# CALCULADORAS
#include <iostream>

using namespace std; 

int A; 
int B;
int O; 
int SUMA, RESTA, MULTI;
float DIV; 

int main() {
    cout<< "Ingresa el primer número : ";
    cin>> A;
    cout<< "Ingresa el segundo número : ";
    cin>> B;
    cout<< "Indica el número de operación a realizar (SUMA = 1, RESTA = 2, MULTIPLICACIÓN = 3, DIVISIÓN = 4): ";
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

```



```
# Cuadrante de plano
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
```

```
# Calificación de examen
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

```

```
# Mayor de tres números
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

```

```
# Determinar si es un año bisiesto
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

```

```
# Determinar el tipo de triangulo
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
```

```
# Calcular el descuento

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

```

```
# Calcular día de la semana
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

```

```
# Calcular el índice de masa corporal (IMC)
#include <iostream>

using namespace std; 

int P;
float A;
int IMC; 

int main() {
    cout<<"Ingresa tu peso: ";
    cin>> P; 
    cout<<"Ingresa su altura: ";
    cin>> A; 
    
    IMC = P/(A*A); 
    
    if(IMC < 18.5){
        cout<<"Su IMC indica bajo peso";
    } else if (IMC >= 18.5 && IMC < 24.9 ) {
        cout<<"Su IMC indica peso normal";
    } else if (IMC >= 25 && IMC < 29.9) {
        cout<<"Su IMC indica sobrepeso";
    } else if (IMC >= 30 && IMC < 34.9) {
        cout<<"Su IMC indica Obesidad clase 1";
    } else if (IMC >= 35 && IMC < 39.9) {
        cout<<"Su IMC indica Obesidad clase 2";
    } else if(IMC >= 40) {
        cout<<"Su IMC indica Obesidad clase 3";
    }
}
```


