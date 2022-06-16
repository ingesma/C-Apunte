#include <iostream>
#include <string>

using namespace std;

/* Para poder usar cadenas de texto tenemos la libreria string que nos permite hacer cadenas de texto con mayor facilidad */

int main()
{
    string texto = "Hola mundo!";
    cout << texto.size() << endl; /* Así se obtiene el size de la cadena de texto */

    string textonum = "10";
    cout << stoi(textonum) << endl; /* Así se convierte una cadena de texto valido como número, y devuelve  un entero */

    string textoflo = "10.5";
    cout << stof(textoflo) << endl; /* Así se convierte una cadena de texto valido como número flotante, y devuelve un flotante */

}

/*
./"17.funciones03.exe"
11
10
10.5
*/