#include <iostream>
using namespace std;

int main() {
    // Ejemplo de operadores lógicos
    int edad = 25;
    bool tiene_credencial = true;
    
    if (edad >= 18 && tiene_credencial) {
        cout << "Puedes entrar al evento." << endl;
    }
    
    bool esta_lloviendo = true;
    bool tengo_paraguas = false;
    
    if (esta_lloviendo && !tengo_paraguas) {
        cout << "Probablemente te mojes." << endl;
    }
    
    int hora = 14;
    if (hora < 12 || hora >= 18) {
        cout << "Es de mañana o de noche." << endl;
    } else {
        cout << "Es de tarde." << endl;
    }
    
    return 0;
}