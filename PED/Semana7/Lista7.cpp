#include <iostream>
#include <string>
using namespace std;



struct TPersona{
	string nombre;
	int edad;
	float peso;
	TPersona *pSgte=NULL;	
};

void leerDatos(TPersona *ptr){
	cout<<"Ingrese el nombre: ";
	fflush(stdin);
	getline(cin,ptr->nombre);
	cout<<"Ingrese la edad: ";
	cin>>ptr->edad;
	cout<<"Ingrese el peso: ";
	cin>>ptr->peso;
}
	
void escribirDatos(TPersona *ptr){
	cout<<"Nombre: "<<ptr->nombre<<endl;
	cout<<"Edad: "<<ptr->edad<<endl;
	cout<<"Peso: "<<ptr->peso<<endl;
}
	
void agregarNodo(TPersona *&pInicio){
	TPersona *pAux=NULL;
	if(pInicio==NULL){
		pInicio = new TPersona;
		leerDatos(pInicio);		
	}
	else{
		pAux=pInicio;
		while(pAux->pSgte!=NULL){
			pAux=pAux->pSgte;
		}
		pAux->pSgte = new TPersona;
		leerDatos(pAux->pSgte);
	}
}

TPersona* buscar(TPersona *pInicio, int edad){ //NULL si no lo encuentra
	TPersona *pAux = NULL;
	pAux = pInicio;
	while(pAux!=NULL){
		if(pAux->edad == edad){
			return pAux;
		}
		pAux=pAux->pSgte;
	}
	return NULL;
}
	
void insertarAntesDeAlgunNodo(TPersona *pInicio, int edad){
	TPersona *pNuevo;
	TPersona *pAux = pInicio;
	TPersona *pAnterior = pInicio;
	
	if(buscar(pInicio,edad)!=NULL){
		
		while(pAux->edad!=edad && pAux!=NULL){
			
			pAnterior = pAux;
			pAux=pAux->pSgte;
		}
		pNuevo = new TPersona;
		leerDatos(pNuevo);
		
		pNuevo->pSgte = pAux;
		
		pAnterior->pSgte = pNuevo;
	}
	
}
	
void agregarNodoAlInicio(TPersona *&pInicio){
	TPersona *pAux=NULL;
	if(pInicio==NULL){
		pInicio = new TPersona;
		leerDatos(pInicio);		
	}
	else{
		pAux = new TPersona;
		leerDatos(pAux);
		
		pAux->pSgte = pInicio;
		
		pInicio = pAux;
	}
}
	
void mostrarDatos(TPersona *pInicio){
	TPersona *pAux=pInicio;
	while(pAux!=NULL){
		cout<<endl<<"-------"<<endl;
		escribirDatos(pAux);
		cout<<endl<<"------"<<endl;
		pAux=pAux->pSgte;
	}
}

	
	
int main(){
	//TPersona *pPer = new TPersona;
	//leerDatos(pPer);
	
	TPersona *pI=NULL;
	TPersona *puntero;
	int e;
	//agregarNodo(pI);
	//agregarNodo(pI);
	
	agregarNodo(pI);
	agregarNodo(pI);
	agregarNodo(pI);
	

	cout<<endl<<"Ingrese la edad del nodo a buscar: ";
	cin>>e;
	puntero = buscar(pI,e);
	if(puntero==NULL){
		cout<<"No existe nodos que tengan una edad de "<<e<<endl;
	}
	else{
		cout<<"Si existe un nodo con edad "<<e<<"direccion: "<<puntero<<endl;
	}
	
	mostrarDatos(pI);
	
	cout<<endl<<"Ingrese la edad del nodo donde antes se insertara: ";
	cin>>e;
	insertarAntesDeAlgunNodo(pI,e);
	
	mostrarDatos(pI);
	/*
	TPersona *pI;
		
	pI = new TPersona;
	
	pI->edad = 10;  //(*pI).edad
	
	pI->pSgte  = new TPersona;
	
	(pI->pSgte)->edad = 34;
	
	(pI->pSgte)->pSgte    = new TPersona;
	*/
	
	return 0;
}