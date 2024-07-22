# Ejercicios de programacion
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

# Ejercicios de programacion
Resolución de código
Semana 09: Bucles

1. Dados dos números previamente validados, obtener el MCD (máximo común divisor), utilizando el método de 
factorización simultánea. Recuerde que el MCD es el mayor común divisor de todos ellos.

2. Calcule la suma de la siguiente serie:
3. Desarrolle un algoritmo que calcule la suma de la siguiente serie hasta el numero entero positivo N ingresado.
4. Realizar un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6....n
Ejemplo:
Digite el número de elementos: 5
La suma es: 3
5. Realice un programa que calcule y muestre en la salida entandar la suma de los cuadrados
de los cuadrados de los 10 primeros enteros mayores que cero, recuerde hacer las
validaciones necesarias.
6. En una clase de 5 alumnos, se han realizado tres exámenes y se requiere determinar el
número de:
a) Alumnos que aprobaron todos los exámenes
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
7. Dado el éxito de su aplicación para poder predecir el nivel de endeudamiento, el Ministerio
de Economía en conjunto al INEI le han solicitado generar un grupo de estadísticas para
poder estimar el crecimiento poblacional. Para poder hacer los cálculos se reciben los
siguientes datos de las personas:
-Estado civil (S: Soltero, C: Casado, V: Viudo, D: Divorciado)
-Sexo (M: Masculino; F: Femenino)
-Sueldo (Valor numérico decimal mayor que 0)
-Tiene vivienda propia (S: Si, N: No)
Se le pide a usted un programa en C++ y en entorno consola, que solicite el ingreso de la
información de un conjunto de personas. El final será cuando se ingrese X como estado
civil de la persona luego de lo cual debe mostrar la siguiente información:
a) ¿Cuál es el porcentaje de personas, respecto del total, que tienen un sueldo mayor a 1500?
b) ¿Cuál es el promedio de sueldo de las mujeres que no tienen una vivienda propia?
c) ¿Cuál es el estado o estados civiles que es más frecuente?
d) ¿Cuál es el menor sueldo del varón que tiene casa propia y no es casado? En caso no
exista alguna persona mostrar un mensaje.

Semana 11
Tema: Funciones con retorno:
Una fábrica paga a sus empleados según su condición, de modo que un obrero contratado recibe al mes S/. 1200.00 
y un obrero estable S/. 1000.00. así mismo, todos los empleados reciben un pago de gratificación en los meses de 
Julio y diciembre. Dicha gratificación varía de acuerdo con los años de servicios que tiene el empleado, como se 
muestra en el siguiente cuadro: Mediante el uso de función con valor de retorno y la declaración de variables 
globales y locales correspondientes, realice lo siguiente:
- TipoObrero(). - Obtener el pago del obrero ya sea Contratado o Estable.
- CálculoSueldo(). - Calcular el sueldo de un obrero correspondiente a un mes determinado.

------------------------------------------------
Anos de servicio            % de Gratificacion
------------------------------------------------
0 a 5 anos                          60
6 a 10 anos                         80
11 a mas                           100
------------------------------------------------
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


