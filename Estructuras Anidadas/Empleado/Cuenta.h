//Empleado.h
//Clase Empleado
#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED

#include <string>
using std::string;

class Cuenta
{   
    //Atributos
    private:
        int numeroCuenta;
        string nombrePropietario; //Datos de un empleado
        double saldoCuenta;
    
    //Metodos
    public:
        Cuenta(int, string, double); //Constructor

        void setNumeroCuenta(int); //establece el numero de cuenta
        int getNumeroCuenta(); //Devuelve el número de cuenta

        void setNombrePropietario(string); // establece el nombre del propietario
        string getNombrePropietario(); // devuelve el nombre del propietario

        void setSaldo(double); // establece el saldo de la cuenta
        double getSaldo(); // devuelve el saldo de la cuenta

        void abonar(double); // abona dinero a la cuenta
        void retirar(double); // retira dinero de la cuenta

        void imprimir(); // imprime los datos de la cuenta
};

#endif // CUENTA_H_INCLUDED
