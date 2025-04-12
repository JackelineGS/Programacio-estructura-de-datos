#include <iostream>
#include <string>
using namespace std;



struct TAutor{
	string nombre;
	string ciudadDeNacimiento;
};

struct TLibro{
	string titulo;
	int anioPublicacion;
	TAutor autores[10];
};

struct TBiblioteca{
	string direccion;
	int cantidadDeLibros;
	TLibro libros[30];
};

void guardarLibro(TBiblioteca &b, int &c){
	int cA;
	cout<<"Ingrese el TITulo del libro: ";
	getline(cin,b.libros[c].titulo);
	cout<<"Ingrese el año de publicación: ";
	cin>>b.libros[c].anioPublicacion;
	cout<<"Dame la cantidad de autores: ";
	cin>>cA;
	for(int i=0;i<cA;i++)
	{
		cout<<"Ingrese el nombre del autor "<<i+1<<" : ";
		fflush(stdin);
		getline(cin,b.libros[c].autores[i].nombre);
		cout<<"Ingrese la ciudad de Nacimiento del autor "<<i+1<<" : ";
		fflush(stdin);
		getline(cin,b.libros[c].autores[i].ciudadDeNacimiento);
	}
	c=c+1;
}

int main(){		
	TBiblioteca biblioteca;
	biblioteca.direccion = "Av. xyz";
	biblioteca.cantidadDeLibros=0; //indice
	
	guardarLibro(biblioteca,biblioteca.cantidadDeLibros);
	
	return 0;
}