#include <iostream>
//#include <wchar.h>
//#include <locale.h>

using namespace std;

int main()
{
    //setlocale(LC_ALL, "");
    //setlocale(LC_CTYPE, "Spanish");
    //setlocale(LC_CTYPE, "Spanish");//Idioma y acentos
    int option = 0;
    cout << "Introduce una opci\xA2n: ";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Opci\xA2n 1";
        break;// para no ejecutar los otros casos
    case 2:
        cout << "Opci\xA2n 2";
        break;
    default:
        cout << "Esto no existe";
        break;
    }
}

/*
á –> \xA0; 
é –> \x82; 
í –> \xA1; 
ó –> \xA2; 
ú –> \xA3; 
ñ –> \xA4; 
Ñ –> \xA5;
á -> 160; 
é -> 130; 
í -> 161; 
ó -> 162; 
ú -> 163; 
ñ -> 164;
*/


/*
$ ./"13.switchCase.exe"
Introduce una opción: 2
Opción 2
*/