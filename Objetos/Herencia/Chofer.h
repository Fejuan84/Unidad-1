#ifndef CHOFER_H
#define CHOFER_H

#include <string>
using namespace std;


#include "Persona.h"

class Chofer : public Persona
{
    private:
        int salario;
    
    public:
        Chofer();
        Chofer(string, string, int);

        void setSalario(int);
        int getSalario();

        void mostrar();
        void funcionVirtual();
};

#endif