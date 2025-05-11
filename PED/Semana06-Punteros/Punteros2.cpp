#include <iostream>
using namespace std;

const int TAM = 5;

void guardar(int *ptr){
    for(int i=0; i<2; i++){
    cin>>*(ptr+i);        
    }
}

void imprimir(int *ptr){
    for(int i =0; i<=2; i++){
        cout<<*(ptr+i)<<" ";
    }
}

int* mayor(int *ptr){
    int m = *(ptr); //almaceno valor
    int* pM = ptr; // almaceno direccion
    for(int i =0; i<=2; i++){
        if(*(ptr+i)>m){
            m=*(ptr+i); //Retornar valor
            pM = ptr+i; //Retornar ubicacion 
        }
    } 
    return pM;
}

int main() {
    // Write C++ code here
  int* p = new int[5];
  int* pt; 
  guardar(p);
  imprimir(p);
  pt = mayor(p);
  cout<<"Direccion"<<pt<<endl;
  cout<<"El valor donde esta m:"<<*pt<<endl; 
  
  return 0; 
}
