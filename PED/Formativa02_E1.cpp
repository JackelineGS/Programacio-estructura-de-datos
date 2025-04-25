#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre[5];
    int edad[5];
};

void registrar(Persona* p){
    for(int i = 0; i<=4;i++){
     cout<<"Nombre de la persona "<<i+1<<" :";
    getline(cin, p->nombre[i]);
    cout<<"Edad de la persona "<<i+1<<" :";
    cin>> p->edad[i];
    cin.ignore();   
    }
}

void mostrarRegistro(Persona* p){
    for(int j =0; j<=4; j++){
        cout<<j+1<<") "<<p->nombre[j]<<":";
        cout<<p->edad[j]<<"\n";
    }
}

void personaJoven(Persona* p){
    int menor = p->edad[0];
    for(int i=0; i<5; i++){
        if(p->edad[i]<menor){
            menor = p->edad[i];
        }
    } 
    cout<<"La persona mas joven tiene: "<<menor<<" años"<<endl;
}

int main() {
    // Write C++ code here
    Persona* registro = new Persona();
    registrar(registro);
    mostrarRegistro(registro);
    personaJoven(registro);
    return 0;
}









