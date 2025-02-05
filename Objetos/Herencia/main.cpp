#include "alumno.cpp"
#include "Chofer.cpp"
#include "persona.cpp"

void mostrarVirtual(Persona &per)
{
    per.funcionVirtual();
}




int main () 
{
    Persona per("Kevin", "Fierro");
    per.mostrar();

    cout << endl;

    Alumno alu("Juan", "Sanchez", 22222);
    alu.mostrar();

    Chofer cho("Checo", "Perez", 4000);
    cho.mostrar();

    mostrarVirtual(per);
    mostrarVirtual(alu);
    mostrarVirtual(cho);
    return 0;
}