//Main.cpp


#include "Alumno.cpp" //Definiciones de la clase Alumno
#include <vector>


//Estructura que almacena el numero de lista y los datos del alumno
struct clase
{
    int numeroLista;
    Alumno datosAlumno; //Objeto con los datos del alumno

    //función que imprime los datos del alumno
    void mostarEstructura() {
        cout << "Numero de lista: " << numeroLista << "\n";
        datosAlumno.imprimir(); //Funcion miembro de la clase objeto que imprime los atributos de la clase Alumno
    }

};

//Funcion que muestra todos los elementos del vector de tipo clase
void mostrarVector(vector <clase> vectorAMostrar) {
    //Ciclo que recorre cada elemento de tipo estructura clase
    //dentro de un vector de tipo clase
    for(clase alumno : vectorAMostrar)
    {
        alumno.mostarEstructura();
        cout << "\n\n";
    }
}



int main() {
    vector <clase> vectorClase; //Vector de tipo estructura clase

    //Añade dos estructuras de tipo clase con el numero de lista del alumno
    //Así como la inicializacion de dos objetos tipo Alumno
    vectorClase.push_back({1, Alumno("Irving", "De la Cruz", 220666277, 3329590074)});
    vectorClase.push_back({2, Alumno("Luis", "Vazquez", 224574875, 3383347584)});

    //Muestra los elementos del vector
    cout << "Vector con los primeros elementos: \n";
    mostrarVector(vectorClase);

    //inserta al principio del vector una nueva estructura
    vectorClase.insert(vectorClase.begin(), {1, Alumno("Erick", "Montana", 226777429, 3381768722)});

    //Modifica los numeros de lista de los elementos 1 y 2 del vector vectorClase
    vectorClase[1].numeroLista = 2;
    vectorClase[2].numeroLista = 3;
    
    //Modifica los datos del objeto de la estructura 2 dentro del vector
    vectorClase[2].datosAlumno.setNumeroTelefono(9999999999);

    //Muestra los datos de la estructura modificada
    cout << "Datos modificados de la estructura 3: \n";
    vectorClase[2].mostarEstructura();
    cout << "\n\n";

    //Agrega una estructura al final del vector
    vectorClase.push_back({4, Alumno("Martha", "Zepeda", 225883234, 33784227752)});

    //Mustra la estructura agregada
    cout << "Nueva estructura agregada: \n";
    vectorClase[3].mostarEstructura();
    cout << "\n\n";

    //Borra la ultima estructura
    vectorClase.pop_back(); 

    //Muestra el vector completo
    cout << "Vector despues de elimimar el ultimo elemento: \n";
    mostrarVector(vectorClase);

    return 0;
}