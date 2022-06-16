#include <iostream>

using namespace std;

int main()
{   
    int edad = 0;
    edad = 18;
    const char letra = 'A'; // const variable no modificable
    int lista_edades[] = {18,24,16}; // crear valores indicar que es lista[]
    lista_edades[1] = 26;
    cout << edad << endl; //end of lista salto de linea
    cout << letra << endl;
    cout << lista_edades[1]; //select of lista de edades cuanta desde 0
}

/*
$ ./"09.constantesylistas.exe" 
18
A 
26
*/