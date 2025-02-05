#include <iostream>

using namespace std;

    // Estructura que representa una fecha
    struct fecha
    {
        string nombre; 
        int dia;
        int mes;
        int anio;
        
        // Función que muestra los datos de una fecha
        void mostrarDia() {
        cout << nombre << " "
        << dia << "/"
        << mes << "/"
        << anio << endl;
        }
    } Dia = {"Examen", 28, 01, 2025}; // Declara una estructura fecha

int main () {
    
    // Utiliza el metodo mostrarDia de la estructura
    Dia.mostrarDia();

    //Crea e inicializa los datos de una nueva estructura
    fecha diaCumpleanios;
    diaCumpleanios.nombre = "Mi cumple";
    diaCumpleanios.dia = 12;
    diaCumpleanios.mes = 02;
    diaCumpleanios.anio = 2005;

    // Muestra los datos de la estructura diaCumpleanios
    cout << diaCumpleanios.nombre << " "
        << diaCumpleanios.dia << "/"
        << diaCumpleanios.mes << "/"
        << diaCumpleanios.anio << endl;



    //Crea arreglos de diferentes tipos de datos
    int numeros[5] = {1,2,3,4,5};
    float real[5] = {12.3, 0.87, 7.5, 34.234, 0.125};
    char caracteres[5] = {'c', 'd', 'a', 'i', 'g'};
    string cadenas[5] = {"Hernandez", "Rodriguez", "Sanchez", "Jimenez", "Flores"};
    bool logicos[5] = {true, false, true, true, false};

    // Muestra los valores de los segundos indices de los arreglos
    cout << "numeros[1] = " << numeros[1] << endl
        << "real[1] = " << real[1] << endl
        << "caracteres[1] = " << caracteres[1] << endl
        << "cadenas[1] = " << cadenas[1] << endl
        << "logicos[1] = " << logicos[1] << endl;

    //Muestra el valor del primer elemento del arreglo numeros
    cout << numeros[0] << endl;
    
    // Modifica el valor del tercer elemento y lo muestra
    numeros[2] = 8; cout << numeros[2] << endl;
    
    // define una variable con el valor del cuarto elemento
    // y lo muestra
    int calificacion = numeros[3];
    cout << calificacion << endl;

    // resta 1 al valor del cuarto elemento del arreglo numeros
    numeros[3] -= 1;

    //Muestra el valor modificado del arreglo numeros
    cout << numeros[3]; 
    return 0;
}