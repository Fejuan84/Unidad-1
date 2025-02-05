// Alumno.h
// Clase Alumno

#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using namespace std;

class Alumno {
    private:
        string nombre; 
        string apellido; 
        int codigo;             // Variables para guardar los datos de un estudiante
        long long numeroTelefono;

    public:
        Alumno(string, string, int, long long); // Constructor parametrizados

        void setNombre(string); // establece el primer nombre
        string getNombre(); // devuelve el nombre

        void setApellido(string); // establece el apellido
        string getApellido(); // devuelve el apellido

        void setCodigo(int); // establece el codigo
        int getCodigo(); //devuelve el codigo

        void setNumeroTelefono(long long); // establece el numero telefono
        long long getNumeroTelefono(); // devuelve el numero telefono

        void imprimir(); //imprime los datos de la clase Alumno
};

#endif