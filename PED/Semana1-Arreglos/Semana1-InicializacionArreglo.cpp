// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() 
{
    //inicialización
    //Si solo declaro el [] saldra error
    int i;
    int goles[3]={15,26,39};
    
    for(int i=0; i<3;i++)
    {
        cout<< "Elemento: "<< i<<": "<<goles[i]<<endl;
    }
    return 0;
}