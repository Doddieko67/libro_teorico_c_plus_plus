#include <iostream>
#include <string>
using namespace std;

int main() {
    // Ejemplo de uso de std::string
    string nombre = "Juan";
    string apellido = "Pérez";
    string nombre_completo = nombre + " " + apellido;
    
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Nombre completo: " << nombre_completo << endl;
    
    // Operaciones con strings
    cout << "Longitud del nombre: " << nombre.length() << endl;
    cout << "Primer carácter del nombre: " << nombre[0] << endl;
    
    return 0;
}