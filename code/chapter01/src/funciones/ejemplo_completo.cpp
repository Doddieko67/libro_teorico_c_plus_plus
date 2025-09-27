#include <iostream>
using namespace std;

// Función para calcular área de un círculo
double calcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

// Función para calcular área de un rectángulo
double calcularAreaRectangulo(double largo, double ancho) {
    return largo * ancho;
}

// Función para calcular área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

// Función para mostrar menú
void mostrarMenu() {
    cout << "Calculadora de Areas" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;
    double resultado;
    
    mostrarMenu();
    cin >> opcion;
    
    switch(opcion) {
        case 1: {
            double radio;
            cout << "Ingrese el radio: ";
            cin >> radio;
            resultado = calcularAreaCirculo(radio);
            cout << "Area del circulo: " << resultado << endl;
            break;
        }
        case 2: {
            double largo, ancho;
            cout << "Ingrese largo y ancho: ";
            cin >> largo >> ancho;
            resultado = calcularAreaRectangulo(largo, ancho);
            cout << "Area del rectangulo: " << resultado << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese base y altura: ";
            cin >> base >> altura;
            resultado = calcularAreaTriangulo(base, altura);
            cout << "Area del triangulo: " << resultado << endl;
            break;
        }
        default:
            cout << "Opcion no valida!" << endl;
    }
    
    return 0;
}