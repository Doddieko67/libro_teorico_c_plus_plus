#include <iostream>
using namespace std;

// Variable global (raramente usada, solo para demostración)
int variableGlobal = 100;

int main() {
    // Variable local en main
    int variableLocalMain = 10;
    
    cout << "Dentro de main:" << endl;
    cout << "Variable local: " << variableLocalMain << endl;
    cout << "Variable global: " << variableGlobal << endl;
    
    // Creamos un bloque para demostrar ámbito local
    {
        // Variable local a este bloque
        int variableLocalBloque = 20;
        cout << "Variable local del bloque: " << variableLocalBloque << endl;
        cout << "Tambien puedo acceder a: " << variableLocalMain << endl;
    } // variableLocalBloque deja de existir aquí
    
    // variableLocalBloque ya no es accesible aquí
    
    return 0;
}