#include <iostream>
using namespace std;

int main() {
    int resultado1 = 5 + 3 * 2;    // 11, no 16
    int resultado2 = (5 + 3) * 2;  // 16
    
    cout << "5 + 3 * 2 = " << resultado1 << endl;
    cout << "(5 + 3) * 2 = " << resultado2 << endl;
    
    // Ejemplo de operadores de asignación compuesta
    int puntuacion = 100;
    cout << "Puntuacion inicial: " << puntuacion << endl;
    
    puntuacion += 25;  // Sumar 25 puntos
    cout << "Despues de sumar 25: " << puntuacion << endl;
    
    puntuacion -= 10;  // Restar 10 puntos
    cout << "Despues de restar 10: " << puntuacion << endl;
    
    puntuacion *= 2;   // Duplicar la puntuacion
    cout << "Despues de duplicar: " << puntuacion << endl;
    
    return 0;
}