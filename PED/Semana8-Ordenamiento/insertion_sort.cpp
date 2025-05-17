#include <iostream>
using namespace std;

void impresion(int veces){
    for(int v=veces; v>=1; v=v-1){ //Parada, cuando v = 0
        cout<<"Hola"<<v<<endl;
    }
}

void impresionRecursiva(int v){
    if(v>=1){
        cout<<"Hola "<<v<<"(IZQ)"<<endl;
        impresionRecursiva(v-1);
        cout<<"Hola "<<v<<"(DER)"<<endl;
        impresionRecursiva(v-1);
    }
}

int main() {
    impresionRecursiva(2);
    return 0;
    
}
