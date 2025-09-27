#include <iostream>
using namespace std;

// Función para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

int main() {
    // Ejemplo con funciones - Sin repetición
    // Usamos la función en lugar de repetir la fórmula
    cout << "Area del circulo 1: " << calcularAreaCirculo(5.0) << endl;
    cout << "Area del circulo 2: " << calcularAreaCirculo(7.5) << endl;
    
    return 0;
}