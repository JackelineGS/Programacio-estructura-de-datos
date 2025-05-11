//Bubble sort
#include <iostream>
using namespace std;

int datos[]={3,0,1,8,7,2,5,4,6,9}; 
           
const int CANTIDAD = 10;

void imprimirArreglo(){
	for(int i=0;i<CANTIDAD;i=i+1){
		cout<<"  "<<datos[i];
	}
	cout<<endl;
}

void intercambiar(int ori,int dest){
	int aux = datos[dest];    
	datos[dest]=datos[ori];    
	datos[ori]=aux;           
}

int main() {                                          //HashSet<Libro> libros = new HashSet<Libro>();
	
	imprimirArreglo();
	bool ordenado=false;
	
	for(int k=0;k<CANTIDAD && ordenado== false;k=k+1){
	    ordenado =true;
		for(int j=0;j<CANTIDAD-1-k;j=j+1){
			if(datos[j]>datos[j+1]){
				intercambiar(j,j+1);
				ordenado=false;
				//cout<<endl<<ordenado<<endl;
				std::cout << std::boolalpha << ordenado << std::endl;
			}
			imprimirArreglo();
			system("pause");
		}		
		cout<<endl<<"Otra pasada"<<endl;
	}
		
	// k=0    
	               // j=0      j=8
	// k=1
	               // j=0      j=7
	// k=2
	               // j=0      j=6
    // k=3
		           // j=0      j=5
	
	return 0;
}