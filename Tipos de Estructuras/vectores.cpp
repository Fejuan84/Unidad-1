#include <iostream>
#include <vector>

using namespace std;

//Función que muestra un vector
void mostrarVector(vector <int> a)
{
    for (size_t i=0; i < a.size(); i++)
    {
        cout << a[i] << ", ";
    }
    cout << "\n\n";
}

int main () {
    //Crea un vector de tipo entero
    vector <int> numeros = {1, 2, 3};

    //Agrega elementos al final del vector
    numeros.push_back(4);
    numeros.push_back(5);

    //Llama a la funcion mostrarVector
    cout << "vector recienmente creado: \n";
    mostrarVector(numeros);

    //Elimina el último elemento
    numeros.pop_back();

    // Llama a mostrarVector
    cout << "Vector despues de eliminar el ultimo elemento:\n";
    mostrarVector(numeros);

    //Inserta un elemento al principio del elemento
    numeros.insert(numeros.begin(), 0);
    cout << "Despues de agregar un nuevo elemento en la posicion"
        << " declarada:\n";

    //Llama a la función mostarVector
    mostrarVector(numeros);

    //Elimina el elemento seleccionado. En este caso, el primero
    numeros.erase(numeros.begin());
    cout << "Despues de eliminar el elemento en la posicion"
        << " declarada:\n";
    mostrarVector(numeros);

    //Crea un vector de tipo entero
    vector <int> b = {9, 8, 7, 6, 5, 4, 3 , 2 ,1};
    
    // Muestra el nuevo vector
    cout << "vector de prueba: \n";
    mostrarVector(b);

    //Elimmina los elementos del vector
    b.clear();

    //Muestra la cantidad de elementos despues de eliminarlos
    cout << "Despues de eliminar todos sus elementos:\n";
    cout  << "Cantidad de elementos: "<< b.size() << endl;

    //Muestra el tamaño del vector
    cout << "Cntidad de tamanio del vector b: " << b.size() << "\n";
    
    //Redefine el taño del vector
    b.resize(18);
    //Muestra el nuevo tamaño del vector
    cout << "Nueva tamanio del arreglo: "<< b.size() << "\n\n";
    
    //Muestra el primer y ultimo elemento del vector
    cout <<"Elemento en la primera posicion: "  << b.front() << endl;
    cout <<"Elemento en la ultima posicion: " << b.back() << endl;

    //Capacidad total reservada en memoria de los vectores
    cout << "Capacidad total del vector numeros: "
        << numeros.capacity() << endl
        << "y del vector b: " << b.capacity() << "\n\n";

    // empty() devuleve true si el vector esta vacio
    if(!b.empty()) // ¿El vector NO esta vacio?
    {
        cout << "El vector no esta vacio";
    }

    // Devuelve el valor del elemento seleccionado
    cout << "\nEl numero en el indice 2 es: " << numeros.at(2) << "\n\n";

    //Imprimimos la memoria reservada para el vector
    cout << "Tamanio actual del vector numeros: " << numeros.capacity();

    //Reservamos para 100 elementos e imprimimos su nueva capacidad total
    numeros.reserve(100);
    cout << "\nTamanio actualizado: " << numeros.capacity() << endl;;

    //Ajusta el tamaño a la cantidad de elementos del vector
    numeros.shrink_to_fit();
    cout << "Cantidad de elemntos actual: " << numeros.size();
    cout << "\nTamanio reducido a su cantidad de elemntos actual: "
        << numeros.capacity();
    return 0;
}