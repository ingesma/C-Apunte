#include <iostream>

using namespace std;

int main()
{   
    int a = 2;
    int b = 3;
    bool c = a > b;
    int edades[] = { 24,40, 7 };
    cout << c << endl;
    //a += 1;
    //cout << a  << endl;
    cout << sizeof(a) << endl; //cantidad de bytes 4
    cout << sizeof(edades[0]) << endl; 
    cout << sizeof(edades[2]) << endl; 
    cout << sizeof(edades)<< endl; 
    cout << sizeof(edades) / sizeof(a) << endl; //n total de lista y dividirlo por tamaño de elementos
    cout << sizeof(edades) / sizeof(edades[0]);

}


/*
$ ./"10.operadores.exe" 
0
4
4
4
12
3
3
*/
