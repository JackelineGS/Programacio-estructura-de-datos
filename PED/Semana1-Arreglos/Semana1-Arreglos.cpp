// Arreglos unidimensionales

#include <iostream>
using namespace std;

int main() {
    int indice;
    // Declarar un arreglo
    //tipoDeDato identificador [cantidad]
    
    int goles[10]; // 10 es la cantidad de elementos
    float notas[10]; //
    char nombre[10];
    bool estadoDeFocos[10];
    string datos[10];
    
    //Usando for()
    //Ingresar datos
    for(indice=0; indice<3; indice++)
    {
        cout<<"Ingrese el elemento: ";
        cin>>goles[indice];
    }
    
    //Mostrar los datos
    for(indice=0; indice<3; indice++)
    {
        cout<<"Elemento posicion"<<indice<<" :"<<goles[indice]<<endl;
    }
    
    //Usando while()    
    
    indice=0;
    while(indice<3)
    {
        cout<<"Ingrese el elemento: ";
        cin>>goles[indice];
        indice++;
    }
    
    indice=0;
    while(indice<3)
    {
        cout<<"Elemento posicion "<<indice<<": "<<goles[indice]<<endl;
        indice++;
    }
    return 0;
}