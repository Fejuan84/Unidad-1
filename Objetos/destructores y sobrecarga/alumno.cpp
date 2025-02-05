// Alumno.cpp
//Definiciones de las funciones miembro de la clase

#include <iostream>
#include "alumno.h" // Definición de la clase alumno

//Constructor sin parametros
Alumno::Alumno() {
    // Imprime que se uso el constructor sin parametros
    cout << "Objeto iniciado con constructor sin paramentros\n";
}

// Constructor con 3 parametros
Alumno::Alumno(string nom, string apell, int cod)
{
    setNombre(nom);
    setApellido(apell);
    codigo = cod;
    cout << "Objeto iniciado con constructor parametrizado\n";
}

Alumno ::Alumno(string nom, string apell, int cod, bool sobrecarga)
    : nombre(nom), apellido(apell), codigo(cod)
{
    cout << "Realize una sobrecarga\n";
}

Alumno ::~Alumno () 
{
    cout << "Objeto "<< nombre << " destruido\n";
}



void Alumno ::mostarObjeto()
{
    cout << nombre << " " << apellido  << " " << codigo << endl;
}

void Alumno ::setNombre(string n)
{
    nombre = n;
}

string Alumno ::getNombre()
{
    return nombre;
}

void Alumno ::setApellido(string a)
{
    apellido = a;
}

string Alumno ::getApellido()
{
    return 0;
}