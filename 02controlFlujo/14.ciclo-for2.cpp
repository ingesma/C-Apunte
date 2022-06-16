#include <iostream>

using namespace std;

int main()
{
    //int lista[] = { 100,200,300 };
    //int limite = sizeof(lista) / sizeof(lista[0]);
    int limite=10;
    cout << "limite: ";
    cin >> limite;// >> endl;
    for( int i=0; i < limite; i+=1){
        cout << i << endl;
        //cout << lista[i] << endl;
        //if(lista[i] == 200){
        //    break;
        //}
    }
}

/*
$ ./"14.ciclo-for2.exe"
limite: 20
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19

*/