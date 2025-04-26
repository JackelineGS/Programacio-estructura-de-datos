#include <iostream>
using namespace std;

int suma(int a, int b){
    return (a+b);
}

int* prueba(){
    int *p = new int(30);
    return p;
}

int main() {
    // Write C++ code here
    int *aux;
    aux = prueba();
    cout<<*aux;
    return 0;
}
