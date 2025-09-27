#include <iostream>
using namespace std;

int main() {
    cout << \"=== Ejemplos de Precedencia de Operadores ===\" << endl;
    
    int resultado1 = 5 + 3 * 2;    // 11, no 16, porque * tiene precedencia sobre +
    int resultado2 = (5 + 3) * 2;  // 16, porque los paréntesis tienen precedencia
    
    cout << \"5 + 3 * 2 = \" << resultado1 << endl;
    cout << \"(5 + 3) * 2 = \" << resultado2 << endl;
    
    // Otro ejemplo de precedencia
    int resultado3 = 10 - 4 / 2;    // 8, no 3, porque / tiene precedencia sobre -
    int resultado4 = (10 - 4) / 2;  // 3
    
    cout << \"10 - 4 / 2 = \" << resultado3 << endl;
    cout << \"(10 - 4) / 2 = \" << resultado4 << endl;
    
    cout << \"\\n=== Ejemplos de Operadores de Asignación Compuesta ===\" << endl;
    
    int puntuacion = 100;
    cout << \"Puntuacion inicial: \" << puntuacion << endl;
    
    puntuacion += 25;  // Equivalente a: puntuacion = puntuacion + 25;
    cout << \"Despues de sumar 25: \" << puntuacion << endl;
    
    puntuacion -= 10;  // Equivalente a: puntuacion = puntuacion - 10;
    cout << \"Despues de restar 10: \" << puntuacion << endl;
    
    puntuacion *= 2;   // Equivalente a: puntuacion = puntuacion * 2;
    cout << \"Despues de duplicar: \" << puntuacion << endl;
    
    puntuacion /= 4;   // Equivalente a: puntuacion = puntuacion / 4;
    cout << \"Despues de dividir por 4: \" << puntuacion << endl;
    
    return 0;
}