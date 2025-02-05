#include <iostream>
#include "Persona.h"

Persona ::Persona() {}

Persona ::Persona(string nom, string apell)
    :nombre(nom), apellido(apell)
{
    //Vacio
}

void Persona ::setNombre(string nom)
{
    nombre = nom;
}

string Persona ::getNombre()
{
    return nombre;
}

void Persona ::setApellido(string apell)
{
    apellido = apell;
}

string Persona ::getApellido()
{
    return apellido;
}

void Persona ::mostrar()
{
    cout << nombre << " " << apellido;
}

void Persona ::funcionVirtual()
{
    cout << "\nSoy una funcion virtual";
}