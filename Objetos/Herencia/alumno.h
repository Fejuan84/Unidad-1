#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using namespace std;

#include "Persona.h"

class Alumno : public Persona
{
    private:
        int codigo;

    public:
        Alumno();
        Alumno(string, string, int = 0);

        void setCodigo(int cod);
        int getCodigo();

        void mostrar();
};

#endif