### PUNTEROS

Memoria estática
Memoria automática
Memoria dinámica

la memoria estática es asignada por el
compilador al inicio y liberado al termino del
mismo, mientras que la memoria dinámica es
asignada y liberada por el desarrollador.

Para poder emplear variables dinámicas es necesario emplear un tipo de dato que permita
referenciar nuevas posiciones de memoria que no han sido declaradas a priori y que se van a crear y
destruir en tiempo de ejecución.

Para manejar la memoria dinámicamente podemos utilizar los siguientes comandos:
• New – Delete
• Malloc - Free

Definidos, ambos, en la librería <stdio.h>
New permite reservar memoria dinámicamente y asignarla a una variable de tipo puntero.
Sintaxis
TipoDato *nombrePuntero;
nombrePuntero = new TipoDato;

Ejemplo 1
int *variableA;
variableA = new int;

Ejemplo 2
int *variableA = new int;

delete permite liberar la memoria reservada con new.
SIEMPRE que exista un new debe existir un delete correspondiente.
Una vez liberada la memoria ya no se podrá acceder a ella por lo que es necesario que se libere cuando
ya no será utilizada.
Sintaxis
delete nombrePuntero;
Ejemplo
delete variableA;


Asignar dinámicamente el espacio
de memoria donde se almacenará
el dato float que apuntará el
puntero.

ptrFloat
= new float
;
En este caso al ser una asignación
dinámica se le asignará un espacio
dentro del Heap

Por último, si deseamos asignarle
un valor al dato apuntado
tendríamos que hacerlo de la
siguiente forma
:
*ptrFloat
= 18
.50