#include <iostream>
#include <stack> //Biblioteca para utilizar pilas

using namespace std;

int main() {

    // Crea una pila de tipo entero
    stack <int> pila;

    // Ingresa elementos a la pila
    pila.push(1);
    pila.push(2);
    pila.push(3);

    // Imprime el elemento en la cima
    cout << "Elemento en la cima: " << pila.top() << endl;

    //Elimina el elemento de la cima
    pila.pop();

    //Imprime el elemento de la cima
    cout <<"Elemento en la cima: "<< pila.top() << endl;
    return 0;
}