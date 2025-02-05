// alumno.h
// Definicion de la clase alumno
#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

using namespace std;

//clase Alumno
class Alumno {
    private:
        string nombre, apellido; // Nombre y apellido del alumno
    
    public:
        int codigo; // Codigo del alumno

        Alumno(); // Constructor sin parametros
        Alumno(string, string, int = 0); // Constructor con 3 parametros
        Alumno(string, string, int, bool); // Constructor con 4 parametros

        ~Alumno(); // Destructor


        void mostarObjeto(); // Imrpime los atributos del objeto
        
        void setNombre( string); // Establece el nombre
        string getNombre(); // Devuelve el nombre

        void setApellido(string); // establece el apellido
        string getApellido(); // devuelve el apellido
};

#endif