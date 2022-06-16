#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

//int main()
//{
//    cout << suma(2,2);
//}

int multiplicar(int a, int b = 2) //uso valor por defecto 
{
    return a * b;
}

int main()
{
    cout << multiplicar(2,200); //cambio el valor pot defecto
}





/*
$ ./"16.funciones02.exe"
400
*/


