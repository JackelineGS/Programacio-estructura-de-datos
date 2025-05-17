// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

struct Tpersona{
    string nombre;
    int edad;
    float peso;
    Tpersona *pSgte=NULL;
};
//6,7,8 guardan datos
    //9 guarda direccion

void leerDatos(Tpersona *ptr){
    cout<<"Ingrese el nombre:";
    getline(cin, ptr->nombre);
    cout<<"Ingrese la edad:";
    cin>>ptr->edad;
    cout<<"Ingrese peso:";
    cin>>ptr->peso;
}

int main() {
    // Write C++ code here
    
    Tpersona *pPer = new Tpersona;
    leerDatos(pPer);
    cout<<"Edad"<<pPer->edad;

    return 0;
}