#include <iostream>
#include <string>
using namespace std;

struct TPersona{
    string nombre;
    int edad;
    float peso;
    TPersona *pSgte=NULL;
};
//6,7,8 guardan datos
    //9 guarda direccion

void leerDatos(TPersona *ptr){
    cout<<"Ingrese el nombre:";
    getline(cin, ptr->nombre);
    cout<<"Ingrese la edad:";
    cin>>ptr->edad;
    cout<<"Ingrese peso:";
    cin>>ptr->peso;
}

void escribirDatos(TPersona *ptr){
    cout<<"Nombre:"<<ptr->nombre<<endl;
    cout<<"Edad:"<<ptr->edad<<endl;
    cout<<"Peso:"<<ptr->peso<<endl;
}

void agregarNodo(TPersona *&pInicio){ //Voy a poder modificar el 100, pasar por referencia
    TPersona *pAux=NULL;
 if(pInicio == NULL){
       pInicio = new TPersona;
        leerDatos(pInicio);
   }
    else{
        pAux=pInicio;
        while(pAux->pSgte!=NULL){
            pAux=pAux->pSgte;
        }
        pAux->pSgte = new TPersona;
        leerDatos(pAux->pSgte);
    }
}

void mostrarDatos(TPersona *pInicio){
    TPersona *pAux=pInicio;
     while(pAux!=NULL){
            escribirDatos(pAux);
            cout<<endl<<"------"<<endl;
            pAux=pAux->pSgte;
        }
}



int main() {
    // Write C++ code here
    
   TPersona *pI=NULL;
   agregarNodo(pI);
   cout<<"pI"<<pI<<endl;
   escribirDatos(pI);

    return 0;
}