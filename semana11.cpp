
// SEMANA 11 - EJERCICIOS

// EJERCICIO 1

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// Obrero contratado: 1200 | Obrero estable: 1000
// Gratificación: Julio, Diciembre
// Año de servicio: 0 - 5: 60%
// Año de servicio: 6 - 10: 80%
// Año de servicio: > 11: 100%

int TipoObrero(int tipo) {
int pago;
if (tipo == 1) {
pago = 1200;
} else {
pago = 1000;
}
return pago;
}
int CalculoSueldo(int mes, int tiempo, int tipo) {
int sueldoFinal;
if(mes == 7 || mes == 12) {
switch(tiempo) {
case 0 ... 5:
sueldoFinal = TipoObrero(tipo)*1.60;
break;
case 6 ... 10:
sueldoFinal = TipoObrero(tipo)*1.80;
break;
case 11 ... 60:
sueldoFinal = TipoObrero(tipo)*2.00;
break;
}} else {
sueldoFinal = TipoObrero(tipo);
}
return sueldoFinal;
}
int main() {
int tipo;
int mes;
int tiempo;
int sueldo;
cout<<"Igresa el tipo de obrero contratado = 1, estable = 2"<<endl;
cin>>tipo;
cout<<"Ingresa el número del mes que pagará: "<<endl;
cin>>mes;
cout<<"Ingresa los años de servicio, de 0 a más: "<<endl;
cin>> tiempo;
sueldo = CalculoSueldo(mes, tiempo, tipo);
cout<<"El sueldo del obrero sera de: "<< sueldo<<endl;
}


// EJERCICIO 2

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// Carpetas:
// Tipo A: s/20 | > 5 descuento de 3%
// Tipo B: s/35 | > 5 descuento de 5%
// Tipo C: s/50 | > 5 descuento de 7%
// Funcion con retorno para obtener el precio segun el tipo de carpeta.
int TipoCarpeta(int num, int tipo) { // Variables locales: num, tipo, precio
int precio;
switch(tipo) {
case 1:
precio = 20*num;
break;
case 2:
precio = 35*num;
break;
case 3:
precio = 50*num;
break;
}
return precio; // Valor de retorno
}
// Función para calcular el monto final de la compra segun el descuento.
int CalculoCompra(int cantidad, int tipo) { // Variables locales: cantidad, tipo, montoFinal
int montoFinal;
if(cantidad > 5){
switch(tipo){
case 1: montoFinal = TipoCarpeta(cantidad, tipo)*0.97;
break;
case 2: montoFinal = TipoCarpeta(cantidad, tipo)*0.95;
break;
case 3: montoFinal = TipoCarpeta(cantidad, tipo)*0.93;
break;
}
} else {
montoFinal = TipoCarpeta(cantidad, tipo);
} return montoFinal;
}
int main() { // Variables globales y locales: tipo, cantidad | variables locales: monto
int tipo;
int cantidad;
int monto;
cout<<"Indique el tipo de carpeta (Tipo A = 1, Tipo B = 2 y Tipo C = 3):";
cin>>tipo;
cout<<"Indique la cantidad de carpetas que quiere comprar: ";
cin>>cantidad;
monto = CalculoCompra(cantidad, tipo);
cout<<"El monto final de la compra sera: "<< monto <<endl;
}


