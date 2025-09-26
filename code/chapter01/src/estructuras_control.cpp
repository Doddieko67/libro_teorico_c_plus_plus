#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Ejemplo de condicional
    int edad = 18;
    if (edad >= 18) {
        cout << "Eres mayor de edad. Puedes votar." << endl;
    } else {
        cout << "Eres menor de edad. No puedes votar todavia." << endl;
    }
    
    // Ejemplo de bucle for
    for (int i = 1; i <= 5; i++) {
        cout << "Contador: " << i << endl;
    }
    
    // Ejemplo de bucle basado en rango con vector
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Recorriendo el vector:" << endl;
    for (int valor : numeros) {
        cout << "Valor: " << valor << endl;
    }
    
    return 0;
}