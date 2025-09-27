#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Suma (a + b): " << a + b << endl;      // Resultado: 13
    cout << "Resta (a - b): " << a - b << endl;     // Resultado: 7
    cout << "Multiplicacion (a * b): " << a * b << endl; // Resultado: 30
    cout << "Division (a / b): " << a / b << endl;  // Resultado: 3 (division entera!)
    cout << "Modulo (a % b): " << a % b << endl;    // Resultado: 1 (resto de 10/3)
    
    // Ejemplo de división con decimales
    cout << "Division decimal: " << (double)a / b << endl;  // Resultado: 3.33333
    
    return 0;
}