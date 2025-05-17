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
    Tpersona *pI;
    
    pI = new Tpersona; //reservar memoria
    pI->edad = 10; //dar contenido
    pI->pSgte = new Tpersona;
    
    (pI->pSgte)->edad=34;//acceder a una ubicacion 
    //New: reserva memoria, da direccion
    
    (pI->pSgte)->pSgte = new Tpersona;

    return 0;
}