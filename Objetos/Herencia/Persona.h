#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
    private:
        string nombre;
        string apellido;

    public:
        Persona();
        Persona(string, string);

        void setNombre(string);
        string getNombre();

        void setApellido(string);
        string getApellido();
        
        void mostrar();
        virtual void funcionVirtual();
};

#endif