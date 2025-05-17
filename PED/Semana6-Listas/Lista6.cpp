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
	
	//agregarNodo(pI);
	
	//agregarNodo(pI);
	
	agregarNodoAlInicio(pI);
	agregarNodoAlInicio(pI);
	agregarNodoAlInicio(pI);
	
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