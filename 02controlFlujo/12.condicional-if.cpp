#include <iostream>

using namespace std;

int main()
{
    bool result1 = true && true; //condicional AND
    bool result2 = true || true; //operation OR
    bool result3 = !true; //operation NOT
    int edad = 0;
    int age;
    cout << result1<< endl;
    cout << result2<< endl;
    cout << result3<< endl;
    
    //primera forma
    cout << "edad: "; //salida
    cin >> edad; //entrada
    if (edad < 18) { //primero lo que no podríá hacer
        cout << "no puedes votar"<< endl; //salida
    } else if (edad > 40) {
        cout << "no puedes votar"<< endl; //salida
    } else {
        cout << "puedes votar"<< endl; //salida
    }   
    cout << endl;


    //segunda forma
        // The program asks for the user's age.
    cout << "Please, enter your age: ";
    // User's age is saved in the variable.
    cin >> age;
    /* If the user's age is less than 18,
         he can't vote or if the user's age is
         greater than 40, he can't vote neither. */
    if ( age < 18 || age > 40) {
        cout << "You can't vote" << endl;
    }
    else {
        cout << "You can vote!" << endl;
        }    
}

/*
$ ./"12.condicional-if.exe"
1
1
0
edad: 15
no puedes votar

Please, enter your age: 18
You can vote!
*/
