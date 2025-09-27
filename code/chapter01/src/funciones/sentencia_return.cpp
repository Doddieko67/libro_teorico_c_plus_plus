#include <iostream>
using namespace std;

// Función que devuelve un valor basado en una condición
int dividir(int numerador, int denominador) {
    if (denominador == 0) {
        cout << "Error: division por cero!" << endl;
        return 0;  // Termina la función y devuelve 0
    }
    
    // Si llegamos aquí, el denominador no es cero
    return numerador / denominador;
}

// Otra función para mostrar return anticipado
bool esNumeroValido(int numero) {
    if (numero < 0) {
        cout << "Numero negativo detectado!" << endl;
        return false;  // Termina la función y devuelve false
    }
    
    if (numero > 100) {
        cout << "Numero demasiado grande!" << endl;
        return false;  // Termina la función y devuelve false
    }
    
    // Si llegamos aquí, el número es válido
    return true;
}

int main() {
    // Ejemplo de división segura
    cout << "Resultado division: " << dividir(10, 2) << endl;  // 5
    cout << "Resultado division: " << dividir(10, 0) << endl;  // 0 (con error)
    
    // Ejemplo de validación
    cout << "Validacion 50: " << esNumeroValido(50) << endl;   // 1 (true)
    cout << "Validacion -5: " << esNumeroValido(-5) << endl;  // 0 (false)
    cout << "Validacion 150: " << esNumeroValido(150) << endl; // 0 (false)
    
    return 0;
}