#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct TPersona {
    int numero_dorsal;
    string nombre;
    string categoria;
    string pais;
    int tiempo_final = -1; // -1 indica que aún no se ha registrado el tiempo
    TPersona *pSgte = NULL;
};
//Lista de inscritos
void leerDatos(TPersona *ptr) {
    cout << "Ingrese el numero de dorsal: ";
    cin >> ptr->numero_dorsal;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese el nombre: ";
    getline(cin, ptr->nombre);
    cout << "Ingrese categoria (Profesional, Aficionado, Élite): ";
    getline(cin, ptr->categoria);
    cout << "Ingrese su pais de origen: ";
    getline(cin, ptr->pais);
}

void escribirDatos(TPersona *ptr) {
    cout << "-----------------" << endl;
    cout << "Numero de dorsal: " << ptr->numero_dorsal << endl;
    cout << "Nombre: " << ptr->nombre << endl;
    cout << "Categoria: " << ptr->categoria << endl;
    cout << "Pais de origen: " << ptr->pais << endl;
}

void agregarNodo(TPersona *&pInicio) {
    TPersona *pAux = NULL;
    if (pInicio == NULL) {
        pInicio = new TPersona;
        leerDatos(pInicio);
    } else {
        pAux = pInicio;
        while (pAux->pSgte != NULL) {
            pAux = pAux->pSgte;
        }
        pAux->pSgte = new TPersona;
        leerDatos(pAux->pSgte);
    }
}

void mostrarDatos(TPersona *pInicio) {
    TPersona *pAux = pInicio;
    while (pAux != NULL) {
        escribirDatos(pAux);
        if (pAux->tiempo_final != -1) {
            cout << "Tiempo final: " << pAux->tiempo_final << " minutos" << endl;
        }
        cout << endl << "------" << endl;
        pAux = pAux->pSgte;
    }
}
// Lista de finalistas
void registrarTiempoFinal(TPersona *pInicio) {
    TPersona *pAux = pInicio;
    while (pAux != NULL) {
        cout << "Ingrese el tiempo final en minutos para el corredor con dorsal " << pAux->numero_dorsal << ": ";
        cin >> pAux->tiempo_final;
        pAux = pAux->pSgte;
    }
}

void mostrarFinalistas(TPersona *pInicio) {
    TPersona *pAux = pInicio;
    cout << "\n--- Lista de Finalistas (menos de 4 horas) ---\n";
    while (pAux != NULL) {
        if (pAux->tiempo_final != -1 && pAux->tiempo_final < 240) {
            escribirDatos(pAux);
            cout << "Tiempo final: " << pAux->tiempo_final << " minutos" << endl;
            cout << "-------------------\n";
        }
        pAux = pAux->pSgte;
    }
}

//Lista de finalistas para el premio especial 

void mostrarPremioEspecial(TPersona *pInicio) {
    TPersona *pAux = pInicio;
    cout << "\n--- Lista de candidatos al premio especial ---\n";
    while (pAux != NULL) {
        if (pAux->tiempo_final < 240 && pAux->nombre.length() <15 && (pAux->pais == "Kenia" || pAux->pais == "Etiopía" || pAux->pais == "Japon")) {
            escribirDatos(pAux);
            cout << "Tiempo final: " << pAux->tiempo_final << " minutos" << endl;
            cout << "Cantidad de caracteres de nombre: "<< pAux->nombre.length() << endl;
            cout << "-------------------\n";
        }
        pAux = pAux->pSgte;
    }
}

//Elección de ganador

void elegirGanador(TPersona *pInicio) {
     TPersona *pAux=pInicio;
     int cantidadFinalistas=0;

     while(pAux !=NULL){
    	if(pAux->tiempo_final !=-1&&pAux->tiempo_final<240){
        	cantidadFinalistas++;
    	}
    	pAux=pAux->pSgte;
     }

     if(cantidadFinalistas==0){
    	cout << "\nNo hay finalistas.\n";
    	return;
     }

      int posicionGanador=cantidadFinalistas/2;
      int contador=0;
      pAux=pInicio;

   	while(pAux != NULL){
    	    if(pAux->tiempo_final !=-1&&pAux->tiempo_final < 240){
        	          if(contador==posicionGanador){
            		cout<<"\n--- GANADOR ---\n";
           	 	escribirDatos(pAux);
         	   	cout<<"Tiempo final: "<<pAux->tiempo_final<<" minutos"<<endl;
           	 	cout<<"Ganador Premio de reconocimiento especial y patrocinio deportivo.\n";
           	 	return;
                   }
        	     contador++;
    	}
    	pAux=pAux->pSgte;
        }
}

int main() {
    int cantidad = 0;
    TPersona *pI = NULL;

    cout << "Ingrese la cantidad de inscritos para la carrera: ";
    cin >> cantidad;

    while (cantidad != 0) {
        agregarNodo(pI);
        cantidad--;
    }
    mostrarDatos(pI);
    registrarTiempoFinal(pI); 
    mostrarFinalistas(pI);  
    mostrarPremioEspecial(pI);
    elegirGanador(pI);
    return 0;
}

