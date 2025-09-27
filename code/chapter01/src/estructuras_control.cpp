#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Ejemplo simple de condicional if
    int edad = 18;
    if (edad >= 18) {
        cout << "Eres mayor de edad. Puedes votar." << endl;
    }
    // Fin del ejemplo simple de condicional if (línea 15)

    // Ejemplo de condicional if-else
    int temperatura = 25;
    if (temperatura > 30) {
        cout << "Hace calor, enciende el aire acondicionado." << endl;
    } else {
        cout << "La temperatura es agradable." << endl;
    }
    // Fin del ejemplo de condicional if-else (línea 28)

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
    // Fin del ejemplo de múltiples condicionales (línea 46)

    // Ejemplo de operadores lógicos
    int edad2 = 25;
    bool tiene_credencial = true;
    
    if (edad2 >= 18 && tiene_credencial) {
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
    // Fin del ejemplo de operadores lógicos (línea 70)

    // Ejemplo de bucle while
    int contador = 1;
    while (contador <= 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }
    // Fin del ejemplo de bucle while (línea 83)

    // Ejemplo de bucle for
    for (int i = 1; i <= 5; i++) {
        cout << "Contador en bucle for: " << i << endl;
    }
    // Fin del ejemplo de bucle for (línea 94)

    // Ejemplo de bucle for basado en rango
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Recorriendo el vector con for basado en rango:" << endl;
    for (int valor : numeros) {
        cout << "Valor: " << valor << endl;
    }
    // Fin del ejemplo de bucle for basado en rango (línea 106)

    // Ejemplo de uso de std::string
    string nombre = "Juan";
    string apellido = "Pérez";
    string nombre_completo = nombre + " " + apellido;
    
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Nombre completo: " << nombre_completo << endl;
    
    // Operaciones con strings
    cout << "Longitud del nombre: " << nombre.length() << endl;
    cout << "Primer carácter del nombre: " << nombre[0] << endl;
    // Fin del ejemplo de uso de std::string (línea 130)

    // Ejemplo de uso de std::vector
    vector<int> valores = {1, 2, 3, 4, 5};
    
    cout << "Elementos del vector:" << endl;
    for (int i = 0; i < valores.size(); i++) {
        cout << "Elemento en índice " << i << ": " << valores[i] << endl;
    }
    
    // Agregar elementos al vector
    valores.push_back(6);
    valores.push_back(7);
    
    cout << "Vector después de agregar elementos:" << endl;
    for (int valor : valores) {
        cout << valor << " ";
    }
    cout << endl;
    // Fin del ejemplo de uso de std::vector (línea 154)

    return 0;
}