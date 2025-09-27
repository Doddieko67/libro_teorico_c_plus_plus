#include <iostream>
using namespace std;

// Declaración anticipada de la función (prototipo)
double calcularAreaTriangulo(double base, double altura);

int main() {
    // Podemos usar la función antes de que esté definida
    // porque la declaramos arriba
    cout << "Area del triangulo: " << calcularAreaTriangulo(10.0, 5.0) << endl;
    
    return 0;
}

// Definición de la función después del main
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}