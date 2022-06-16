#include <iostream>

using namespace std;

int main()
{

     while(true) {
         char respuesta; //ciclo infinito hasta el break
         cout << "Deseas continuar?" << endl;
         cin >> respuesta;
         if(respuesta == 'y') {
             cout << "bye bye";
             break;
         }
     };

    //do {
    //    char respuesta;
    //    cout << "Deseas continuar?" << endl;
    //    cin >> respuesta;
    //    if(respuesta == 'y') {
    //        cout << "bye bye";
    //        break;
    //    }
    //} while(true);
}


/* respuesta

$ ./"15.ciclo-while.exe"
Deseas continuar?
f
Deseas continuar?
d
Deseas continuar?
y
bye bye

*/

