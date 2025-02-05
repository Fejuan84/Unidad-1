#include "alumno.cpp" //Definiciones de la clase alumno

int main() {
    
    // inicializa un objeto alumno con el constructor sin parametros
    Alumno al1;
    // Imprime el nombre del objeto
    cout << "Nombre del primer objeto " << al1.getNombre() << endl;;
    
    //Error al acceder al atributo privado
    //al1.apellido = "Gonzales";

    // establece el nombre del objeto al1
    al1.setNombre("Juan");

    //Muestra el nombre del objeto al1
    cout << "Nombre del primer objeto despues de setNombre(): " <<
        al1.getNombre() << endl;
    
    // establece el codigo del alumno accediendo
    // directamente ya que es un atributo publico
    al1.codigo = 234;
    //Muestra el codigo del al1
    cout << "Codigo: " << al1.codigo << endl;
    
    // Crea un objeto alumno al2 utilizando el
    // constructor parametrizado y omitiendo un
    // argumento
    Alumno al2("Jose", "Vazquez");
    // muestra los objetos del objeto al2
    al2.mostarObjeto();

    // Crea un objeto alumno utilizando
    // el constructor parametrizado
    Alumno al3("Maria", "Jimenez", 789);
    //muestra los datos del objeto al3
    al3.mostarObjeto();
    
    return 0;
}