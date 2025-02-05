#include <iostream>

#include "alumno.h"

Alumno ::Alumno() : Persona()
{
}

Alumno ::Alumno(string nom, string apell, int cod)
    : Persona(nom, apell)
{
    setCodigo(cod);
}

void Alumno ::mostrar()
{
    Persona ::mostrar();
    cout << " Codigo: " << getCodigo() << endl;
}

void Alumno ::setCodigo(int cod)
{
    codigo = cod;
}

int Alumno ::getCodigo()
{
    return codigo;
}