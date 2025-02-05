#include <iostream>
#include <string>

using namespace std;

// Crea una clase
class alumno {
    
    //Atributos
    private:
        string nombre;
        string apellido;
    public:
        alumno(string nom, string apell); //Constructor
        void mostrarObjeto(); //Imprime los atributos de la clase
};

// Constructor de la clase alumno
alumno ::alumno(string nom, string apell)
{
    //Inicializa los atributos de la clase
    nombre = nom;
    apellido = apell;
}

// Muestra los atributos de la clase
void alumno ::mostrarObjeto()
{
    cout << nombre << " " << apellido << endl;
}


int main() {
    // Crea dos objetos de tipo alumno
    alumno alumno1("Juan", "Sanchez");
    alumno alumno2("Joel", "Hernandez");

    //Muestra los datos de los objetos
    alumno1.mostrarObjeto();
    alumno2.mostrarObjeto();
    return 0;
}