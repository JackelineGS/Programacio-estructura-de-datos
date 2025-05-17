#include <iostream>
using namespace std;

struct Tpersona{
    string nombre;
    int edad;
    float peso;
    Tpersona *pSgte=NULL;
};
//6,7,8 guardan datos
    //9 guarda direccion


int main() {
    // Write C++ code here
    Tpersona per;
    Tpersona *ptr;
    Tpersona ps[3]; //Memoria estatica
    Tpersona* pers = new Tpersona[4]; //memoria dinamica, no indica que guardes de forma consecutiva
    
    
    
    //Limite de memoria al definir la cantidad al inicio 
    //puedo reservar uno por uno, pero eso no es dable
    //Para cada bloque necesitaria cada puntero
    Tpersona *p1 = new Tpersona; 
    Tpersona *p2 = new Tpersona;
    Tpersona *p3 = new Tpersona;
    
    //Me gustaria tener varias personas 
    
    

    return 0;
}