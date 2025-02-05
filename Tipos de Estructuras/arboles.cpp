#include <iostream>

using namespace std;

//Estructura que representa un nodo
struct Nodo {
    int dato; //tipo de dato del nodo
    Nodo* izquierdo; // puntero que apunta al dato izquierdo del nodo
    Nodo* derecho; //puntero que apunta al dato derecho del nodo

    //Constructor que inicializa la estructura
    Nodo(int val) : dato(val), izquierdo(nullptr), derecho(nullptr) {}
};


int main() {
    //Crea la raiz principal
    Nodo* raiz = new Nodo(10);

    //Agrega siguientes datos al nodo principal
    raiz->izquierdo = new Nodo(5);
    raiz->derecho = new Nodo(15);

    //Imprime el dato a la izquierda de la raiz principal
    cout << raiz -> izquierdo ->dato << endl;
    return 0;
}
