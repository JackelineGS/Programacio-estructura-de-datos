// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int* devolverMayor(int array[], int size){
    int* ptrmayor = &array[0];
    for(int i=0; i<size; i++){
        if(*ptrmayor<array[i]){
            ptrmayor = &array[i];
        }
    }
    return ptrmayor;
}


int main() {
    // Write C++ code here
    int *arrayNum;
    arrayNum = new int[5]; 
    //arrayNum[] = {1,2,3,4,5};
    
    //int *arrayNum = new int[5]{1, 2, 3, 4, 5};
    arrayNum[0] = 1;
    arrayNum[1] = 2;
    arrayNum[2] = 3;
    arrayNum[3] = 4;
    arrayNum[4] = 5;
    
    int size = 5;
    int* ptrmayor = devolverMayor(arrayNum, size);
    cout<<"El mayor elemento es:" <<*ptrmayor<<endl; 
    cout<<"Su direccion de memoria es:"<<ptrmayor<<endl;
    delete[] arrayNum;
    return 0;
} 