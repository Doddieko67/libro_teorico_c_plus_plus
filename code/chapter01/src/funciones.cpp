#include <iostream>
#include <cmath>
using namespace std;

// Funcion para calcular area de un circulo
double calcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

// Funcion para calcular area de un rectangulo
double calcularAreaRectangulo(double largo, double ancho) {
    return largo * ancho;
}

int main() {
    // Usar las funciones
    cout << "Area del circulo 1: " << calcularAreaCirculo(5.0) << endl;
    cout << "Area del circulo 2: " << calcularAreaCirculo(7.5) << endl;
    
    cout << "Area del rectangulo: " << calcularAreaRectangulo(10.0, 5.0) << endl;
    
    // Ejemplo de paso de parametros por valor
    int valor = 10;
    cout << "Valor antes de la funcion: " << valor << endl;
    
    // Creamos una funcion para duplicar (solo cambia la copia)
    auto duplicar = [](int numero) {
        numero = numero * 2;
        cout << "Valor dentro de la funcion: " << numero << endl;
    };
    
    duplicar(valor);  // Pasamos una copia de 'valor'
    cout << "Valor despues de la funcion: " << valor << endl;  // Aun es 10!
    
    return 0;
}