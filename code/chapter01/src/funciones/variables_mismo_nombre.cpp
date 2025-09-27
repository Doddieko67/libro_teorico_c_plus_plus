#include <iostream>
using namespace std;

// Ambas funciones tienen una variable llamada 'contador'
// pero son completamente diferentes por estar en ámbitos distintos
int funcion1() {
    int contador = 10;
    cout << "Contador en funcion1: " << contador << endl;
    return contador;
}

int funcion2() {
    int contador = 20;  // Esta es una variable completamente distinta
    cout << "Contador en funcion2: " << contador << endl;
    return contador;
}

int main() {
    cout << "Llamando a funcion1:" << endl;
    funcion1();
    
    cout << "Llamando a funcion2:" << endl;
    funcion2();
    
    // Ninguna afecta a la otra
    cout << "Ambas funciones tienen su propia variable 'contador'" << endl;
    
    return 0;
}