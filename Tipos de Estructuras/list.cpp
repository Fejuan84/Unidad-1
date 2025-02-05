#include <iostream>
#include <list> //Biblioteca para utilizar listas

using namespace std;

int main () {
    //Crea una lista de tipo string
    list <string> nombres = {"Jose", "Maria", "Hector"};

    //Recorre los elemntos desde el principio de la lista hasta el final
    //Imprimira cada elemento
    for (auto it = nombres.begin(); it != nombres.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}