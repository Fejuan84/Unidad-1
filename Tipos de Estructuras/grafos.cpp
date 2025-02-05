#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Crea un vector de vectores de tipo entero para
    //representar un grafo
    vector <vector<int>> grafo = {
        {1, 2}, //El elemento 0 está unido con los elementos 1 y 2
        {0, 3}, //El elemnto 1 está unido con los elementos 0 y 3
        {0, 3}, //El elemento 2 está undio con los elemetos 0 y 3
        {1, 2} //El elemnto 3 está unido con los elemtos 1 y 2
    };

    //Recorre los elementos de tipo int del vector 3 del grafo
    //imprimiendo los elemntos relacionados con el elemento 3
    for(int vecino : grafo[3]) {
        cout << vecino << " "; //Imprimira 1 2
    }

    return 0;
}