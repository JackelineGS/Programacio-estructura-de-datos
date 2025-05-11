#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std; 

struct Tautos {
 int registro; 
 string placa;
 string marca;
 string color;
 Tautos *pste = NULL;
};


void registrarAutos(Tautos *ptr){
    cout<<"Ingrese numero de registro (debe ser mayor a 2)"<<endl; 
    cin>> ptr->registro;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Ingresa la placa del auto"<<endl; 
    getline(cin, ptr->placa); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Ingresa la marca del auto"<<endl; 
    getline(cin, ptr->marca); 
    cout<<"Ingresa el color del auto"<<endl; 
    getline(cin, ptr->color);
}

void mostrarAutos(Tautos *ptr){
     cout<<"-----------------------------"<<endl;
    cout<<"Autos registrados"<<endl;
    cout<<"Registro: "<< ptr->registro <<endl;
    cout<<"Placa: "<< ptr->placa <<endl; 
    cout<<"Marca:" << ptr->marca <<endl; 
    cout<<"Color:" <<ptr->color<<endl;   
}

void agregarNodo(Tautos *&pIn){
    Tautos *pAux = NULL;
    if(pIn == NULL){
        pIn = new Tautos;
        registrarAutos(pIn);
    } else {
        pAux = pIn;
        while(pAux->pste != NULL){
            pAux = pAux->pste; 
        }
        pAux->pste = new Tautos;
        registrarAutos(pIn);
    }
}

void mostrarRegistro(Tautos *pIn){
    Tautos *pAux = pIn; 
    while(pAux != NULL){
        mostrarAutos(pAux);
        pAux = pAux->pste;
    }
}
// Pregunta 2
void autosSorteo(Tautos *pIn){
    Tautos *pAux = pIn; 
    while (pAux != NULL) {
    if (pAux->registro %2 == 0) {
        cout<<"\n--- Autos que ingresan al sorteo ---\n";
        mostrarRegistro(pAux);
    } else {
        mostrarRegistro(pAux);
    }
    pAux=pAux->pste;
    }
}

//Elegir al ganador 

/*void autoGanador(Tautos *pIn){
    Tautos *pAux = pIn; 
    while (pAux != NULL) {
    if (pAux->registro %2 == 0) {
        cout<<"\n--- Autos ganador ---\n";
        mostrarRegistro(pAux);
    }
    pAux=pAux->pste;
    }
}*/

int main(){
    int cantidad = 0;
    Tautos *pI = NULL;
    cout<<"¿Cuantos autos desea registrar?"<<endl; 
    cin>>cantidad; 
    
    while(cantidad != 0){
        agregarNodo(pI);
        cantidad --; 
    }
    
    registrarAutos(pI); 
    mostrarAutos(pI);
    mostrarRegistro(pI);
    autosSorteo(pI);

    return 0;
}