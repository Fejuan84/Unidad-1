#include <iostream>
#include "alumno.h" // Definición de la clase alumno

// Constructor sin parametros
Alumno::Alumno() {
    // Mensaje para señalar que se uso el constructor sin parametros
    cout << "Objeto iniciado con constructor sin paramentros\n";
}

// Constructor parametrizado
Alumno::Alumno(string nom, string apell, int cod)
{
    setNombre(nom);
    setApellido(apell);
    codigo = cod;
    // Mensaje para señalar que se uso el constructor parametrizado
    cout << "Objeto iniciado con constructor parametrizado\n";
}

// Muestra los datos del objeto
void Alumno ::mostarObjeto()
{
    cout << nombre << " " << apellido  << " " << codigo << endl;
}

// establece el nombre
void Alumno ::setNombre(string n)
{
    nombre = n;
}

// devuelve el nombre
string Alumno ::getNombre()
{
    return nombre;
}

// establece el apellido
void Alumno ::setApellido(string a)
{
    apellido = a;
}

// devuelve el apellido
string Alumno ::getApellido()
{
    return apellido;
}