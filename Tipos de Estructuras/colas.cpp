#include <iostream>
#include <queue> //Biblioteca para utilizar colas 

using namespace std;


int main() {
    //Crea una cola de tipo entero
    queue <int> fila;

    //Agrega elementos con push()
    fila.push(1);
    fila.push(2);
    fila.push(3);

    //Elimina el primer elemento ingresado
    fila.pop(); //1

    //Imprime el primer elemento de la cola
    cout << "Primer elemento: " << fila.front() << endl; //2

    //Imprime el último elemento ingresado
    cout << "Ultimo elemento insertado: " << fila.back() << endl; //3
}

