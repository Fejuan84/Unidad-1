//Empleado.cpp
//Definiciones de las funciones miembro de la clase base abstracta Empleado

#include <iostream>
using namespace std;

#include "Cuenta.h" // definición de la clase Empleado

// Constructor
Cuenta ::Cuenta(int numero, string nombre, double sal)
    : numeroCuenta( numero ), nombrePropietario( nombre )
{
    setSaldo(sal); //Valida que no sea cero
}

//establece el numero de cuenta
void Cuenta ::setNumeroCuenta(int numero)
{
    numeroCuenta = numero;
}

// Devuelve el numero de cuenta
int Cuenta ::getNumeroCuenta()
{
    return numeroCuenta;
}

// establece el nombre del propietario
void Cuenta::setNombrePropietario(string nombre)
{
    nombrePropietario = nombre;
}

// devuelve el nombre del propietario
string Cuenta ::getNombrePropietario()
{
    return nombrePropietario;
}

// establece el saldo de la cuenta
void Cuenta ::setSaldo(double sal)
{
    if(sal < 0.0) // ¿el saldo es negativo?
    {
        cout << "Saldo invalido\n";
        saldoCuenta = 0.0; // Lo establece en 0
    }
    else
    {
        saldoCuenta = sal; 
    }
}

// devuelve el saldo de la cuenta
double Cuenta ::getSaldo()
{
    return saldoCuenta;
}

// Abona dinero a la cuenta
void Cuenta ::abonar(double abono)
{
    saldoCuenta += abono;
}

// Retira dinero de la cuenta
void Cuenta ::retirar(double retiro)
{
    if(retiro > saldoCuenta) // Valida si el retiro supera el dinero de la cuenta
    {
        cerr << "El monto a cargar excedio el saldo de la cuenta\n"; //No retira nada
    }
    {
        saldoCuenta -= retiro; // Retira el dinero de la cuenta
    }
}

// imprime los datos de la cuenta
void Cuenta ::imprimir()
{
    cout << "El numero de cuenta es ......................... = " << getNumeroCuenta() << "\n"
         << "El propietario de la cuenta es ................. = " << getNombrePropietario() << "\n"
         << "El saldo de la cuenta es ....................... = $" << getSaldo() << endl;
}