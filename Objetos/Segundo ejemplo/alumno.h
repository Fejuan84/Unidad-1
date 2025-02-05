//alumno.h
// Definición de la clase Alumno

#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

using namespace std;

// Clase alumno
class Alumno {
    private:
        string nombre, apellido; //nombre y apellido del alumno
    
    public:
        int codigo; // Código del alumno

        Alumno(); // Constructor
        Alumno(string, string, int = 0); // Constructor parametrizado con un parametro por omision
        void mostarObjeto(); // Muestra los datos del objeto
        
        void setNombre(string); // establece el nombre
        string getNombre(); // devuelve el nombre

        void setApellido(string); // establece el nombre
        string getApellido(); // devuelve el nombre
};

#endif