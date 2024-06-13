#include <iostream>
using namespace std;
int CostoSeguro (int s , int e){
    int out;
    if(s==0){
        if(e<=25){
          out = 1000; 
        } else{
            out = 700;
        }
    } else if (s==1){
        if (e<=21){
            out = 500;
        } else {
            out = 300;
        }
    } 
    return out;
}

int main(){
    int s; 
    int e;
    int out;
    cout<<"ingrese 0 si es hombre, 1 si es mujer: "<<endl;
    cin>>s;
    cout<<"ingrese su edad: "<<endl;
    cin>>e;
    out = CostoSeguro(s,e);
    cout<< "el costo del seguro es: " <<out<<endl;
    return 0;
}