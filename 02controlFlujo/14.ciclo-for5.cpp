#include <iostream>

using namespace std;

int main()
{
    int lista[] = { 100,200,300 };
    int limite = sizeof(lista) / sizeof(lista[0]); //sizeof tamaño en bytes de una variable
    for( int i=0; i < limite; i+=1){  //obtener lista de la cantidad de números
        cout << lista[i] << endl;
        if(lista[i] == 200){
            break;
        }
    }   
}

/*
$ ./"14.ciclo-for5.exe"
100
200
*/  

