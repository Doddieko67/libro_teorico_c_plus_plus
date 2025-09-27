#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Ejemplo completo que demuestra estructuras de control
    
    // Condicionales
    int edad = 18;
    if (edad >= 18) {
        cout << "Eres mayor de edad. Puedes votar." << endl;
    } else {
        cout << "Eres menor de edad. No puedes votar todavia." << endl;
    }
    
    // Bucle for
    cout << "Contando del 1 al 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // Bucle basado en rango con vector
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Recorriendo el vector:" << endl;
    for (int valor : numeros) {
        cout << "Valor: " << valor << endl;
    }
    
    return 0;
}