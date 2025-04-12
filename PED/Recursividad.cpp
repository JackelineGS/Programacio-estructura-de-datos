#include <iostream>
#include <string>
using namespace std;

struct TDireccion{
	string calle;
	string ciudad;
	int codigoPostal;
};

struct TPersona{
	string nombre;
	int edad;
	TDireccion direccion;
};


void leerPersona(TPersona &p){
	cout<<"Ingrese el nombre de la persona: ";
	fflush(stdin);
	getline(cin, p.nombre);
	cout<<"Ingrese la edad: ";
	fflush(stdin);
	cin>>p.edad;
	cout<<"Ingrese la calle: ";
	fflush(stdin);
	getline(cin, p.direccion.calle);
	cout<<"Ingrese la ciudad: ";
	fflush(stdin);
	getline(cin, p.direccion.ciudad);
	cout<<"Ingrese el código postal: ";
	fflush(stdin);
	cin>>p.direccion.codigoPostal;
}

void escribirPersona(TPersona p){
	cout<<"Nombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
	cout<<"Calle: "<<p.direccion.calle<<endl;
	cout<<"Ciudad: "<<p.direccion.ciudad<<endl;
	cout<<"Código postal: "<<p.direccion.codigoPostal<<endl<<endl;
}
	
void leerVariasPersonas(TPersona ps[], int cantidad){
	for(int i=0;i<cantidad;i++)
	{
		leerPersona(ps[i]);
	}
}
	
void escribirVariasPersonas(TPersona ps[], int cantidad){
	for(int i=0;i<cantidad;i++)
	{
		escribirPersona(ps[i]);
	}
}
	
void imprimirMenu(){
	system("cls");
	cout<<"			MENU\n";
	cout<<"1. Registrar Personas \n";
	cout<<"2. Mostrar Personas Registradas\n";
	cout<<"3. Mostrar la persona con mayor edad\n";
	cout<<"4. Contar cuantas personas son mayores de edad\n";
	cout<<"5. Mostrar las personas que son mayores de edad\n";
	cout<<"9. Salir\n\n";
	cout<<"Ingrese la opción: ";
		
}
	
	                           
TPersona personaConMayorEdad(TPersona ps[], int cantidad){
	TPersona p;
	int mayor;
	mayor = ps[0].edad;   
	p = ps[0];
	for(int i=0;i<cantidad;i++){
		if(ps[i].edad > mayor){
			mayor = ps[i].edad;
			p=ps[i];
		}
	}
	return p;
}
	
	
int main(){

	TPersona personas[10];     
	TPersona aux;
	int cant=0;
	int opcion=0;
	while(opcion!=9){
		imprimirMenu();
		cin>>opcion;
		switch(opcion){			
			case 1: 
					system("cls");
					cout<<"Ingrese la cantidad de personas a leer: ";
					cin>>cant;					
					leerVariasPersonas(personas,cant);
					break;
			case 2: system("cls");
					escribirVariasPersonas(personas,cant);
					system("pause");
					break;
			case 3: system("cls");
			        aux = personaConMayorEdad(personas,cant);
					escribirPersona(aux);
					system("pause");
					break;		
		}
	}
	
	return 0;
}