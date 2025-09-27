#include <iostream>
using namespace std;

int main() {
    // Ejemplo de múltiples condicionales if-else if-else
    int puntaje = 85;
    if (puntaje >= 90) {
        cout << "Excelente trabajo! Calificación: A" << endl;
    } else if (puntaje >= 80) {
        cout << "Buen trabajo! Calificación: B" << endl;
    } else if (puntaje >= 70) {
        cout << "Trabajo aceptable. Calificación: C" << endl;
    } else {
        cout << "Necesitas mejorar. Calificación: D o F" << endl;
    }
    
    return 0;
}