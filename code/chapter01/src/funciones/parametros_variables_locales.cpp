#include <iostream>
using namespace std;

// Función que toma parámetros y define variables locales
int calcularSuma(int a, int b) {
    // 'a' y 'b' son parámetros (variables locales a esta función)
    // 'resultado' es una variable local
    int resultado = a + b;
    return resultado;
}

int main() {
    int x = 5;
    int y = 3;
    
    // Llamamos a la función con x e y como argumentos
    int suma = calcularSuma(x, y);
    
    cout << "La suma de " << x << " + " << y << " es " << suma << endl;
    
    return 0;
}