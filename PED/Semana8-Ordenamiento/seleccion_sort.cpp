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

int main() {                                      
	
	imprimirArreglo();
	int menor;
	int aux;
	for(int i=0;i<CANTIDAD;i=i+1){
	   menor = datos[i];
	   for(int j=i+1; j<CANTIDAD; j=j+1){
	       if(datos[j]<menor){
	           aux = menor;
	           menor = datos[j];
	           datos[j]=aux;
	           cout<<"Intercanbio";
	           imprimirArreglo();
	           system("pause");
	       }
	   }
	   datos[i]=menor;
	   cout<<"Pasada";
	   imprimirArreglo();
	}
	
	
	return 0;
}