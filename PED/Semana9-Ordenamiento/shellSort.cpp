#include <iostream>
using namespace std;

int costo[]={3,5,1,8,7,2,5,4,6,9,15,10}; 
           
const int CANTIDAD = 12;

void imprimirArreglo(){
	for(int i=0;i<CANTIDAD;i=i+1){
		cout<<"  "<<costo[i];
	}
	cout<<endl;
}

void sortShell(int* a, int n, int gap){
    
     if (gap <= 0){
            return; 
    }
    
    int i = gap;
    while(i < n){
       int posicionActual = a[i]; 
       int j = i; 
        
        while(j>= gap && a[j-gap] < posicionActual){
            a[j] = a[j-gap];
            j= j - gap;
        }
        a[j] = posicionActual; 
        i++;
    }
    sortShell(a, n, gap / 2);
}

int main() {                                      
	
	imprimirArreglo();
	int gap = CANTIDAD / 2;
	sortShell(costo, CANTIDAD, gap);
	imprimirArreglo();
	
	
	return 0;
}
