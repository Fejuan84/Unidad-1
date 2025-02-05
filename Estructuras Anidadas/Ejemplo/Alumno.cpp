// Empleado.cpp
// Definiciones de las funciones miembro de la clase Alumno

#include <iostream>
#include "Alumno.h" // definición de la clase Alumno

//Constructor
Alumno ::Alumno(string nom, string apell, int cod, long long numero)
{
    setNombre(nom);             // Establece los atributos miembro
    setApellido(apell);         // de la clase Alumno con las funciones
    setCodigo(cod);             // miembro
    setNumeroTelefono(numero);
}

// establece el nombre
void Alumno ::setNombre(string nom)
{
    nombre = nom;
}


// devuelve el nombre
string Alumno ::getNombre()
{
    return nombre;
}

// establece el apellido
void Alumno ::setApellido(string apell)
{
    apellido = apell;
}

// devuelve el apellido
string Alumno ::getApellido()
{
    return apellido;
}

// establece el codigo
void Alumno ::setCodigo(int cod)
{
    codigo = cod;
}

// devuelve el codigo
int Alumno ::getCodigo()
{
    return codigo;
}

// establece el numero de telefono
void Alumno ::setNumeroTelefono(long long numero)
{
    numeroTelefono = numero;
}

// devuelve el numero de telefono
long long Alumno ::getNumeroTelefono()
{
    return numeroTelefono;
}

// imprime los datos de la clase Alumno
void Alumno ::imprimir()
{
    cout << "Nombre: " << nombre << " " << apellido
        << "\n" << "Codigo: " << codigo << "\n"
        << "Numero de Telefono: " << numeroTelefono;
}