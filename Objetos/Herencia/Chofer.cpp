#include <iostream>

#include "Chofer.h"

Chofer ::Chofer() : Persona()
{
}

Chofer ::Chofer(string nom, string apell, int sal)
    : Persona(nom, apell)
{
    setSalario(sal);
}

void Chofer ::setSalario(int sal)
{
    salario = sal;
}

int Chofer ::getSalario()
{
    return salario;
}

void Chofer ::mostrar()
{
    Persona ::mostrar();
    cout << " Salario: $" << getSalario() << endl;
}


void Chofer ::funcionVirtual()
{
    cout << "\nSoy una funcion virtual de la clase Chofer";
}