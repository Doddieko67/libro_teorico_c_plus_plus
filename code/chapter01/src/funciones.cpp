#include <iostream>
#include <cmath>
using namespace std;

// Ejemplo de función con todos los componentes
// - Tipo de retorno: double
// - Nombre de la función: calcularAreaRectangulo  
// - Parámetros: double largo, double ancho
// - Cuerpo de la función: realiza el cálculo
// - Sentencia return: devuelve el valor
double calcularAreaRectangulo(double largo, double ancho) {
    return largo * ancho;  // devuelve el área
}

// Declaración anticipada de la función (prototipo)
double calcularAreaTriangulo(double base, double altura);

// Función para duplicar un valor (paso por valor)
void duplicar(int numero) {
    numero = numero * 2;  // Solo cambia la copia local
    cout << "Valor dentro de la funcion: " << numero << endl;
}

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

// Ambas funciones tienen una variable llamada 'contador'
// pero son completamente diferentes por estar en ámbitos distintos
int funcion1() {
    int contador = 10;
    cout << "Contador en funcion1: " << contador << endl;
    return contador;
}

int funcion2() {
    int contador = 20;  // Esta es una variable completamente distinta
    cout << "Contador en funcion2: " << contador << endl;
    return contador;
}

int main() {
    cout << "=== Principio DRY: No Repitas Código ===" << endl;
    // Ejemplo con funciones - Sin repetición
    // Usamos la función en lugar de repetir la fórmula
    double radio1 = 5.0;
    double radio2 = 7.5;
    
    auto calcularAreaCirculo = [](double radio) {
        return 3.14159 * radio * radio;
    };
    
    cout << "Area del circulo 1: " << calcularAreaCirculo(radio1) << endl;
    cout << "Area del circulo 2: " << calcularAreaCirculo(radio2) << endl;
    
    cout << "\n=== Anatomía de una Función ===" << endl;
    double area = calcularAreaRectangulo(10.0, 5.0);
    cout << "Area del rectangulo: " << area << endl;
    
    cout << "\n=== Declaración anticipada de función ===" << endl;
    cout << "Area del triangulo: " << calcularAreaTriangulo(10.0, 5.0) << endl;
    
    cout << "\n=== Paso de parámetros por valor ===" << endl;
    int valor = 10;
    cout << "Valor antes de la funcion: " << valor << endl;
    duplicar(valor);  // Pasamos una copia de 'valor'
    cout << "Valor despues de la funcion: " << valor << endl;  // Aun es 10!
    
    cout << "\n=== Uso de return ===" << endl;
    cout << "Resultado division: " << dividir(10, 2) << endl;  // 5
    cout << "Resultado division: " << dividir(10, 0) << endl;  // 0 (con error)
    
    cout << "Validacion 50: " << esNumeroValido(50) << endl;   // 1 (true)
    cout << "Validacion -5: " << esNumeroValido(-5) << endl;  // 0 (false)
    cout << "Validacion 150: " << esNumeroValido(150) << endl; // 0 (false)
    
    cout << "\n=== Variables con el mismo nombre ===" << endl;
    cout << "Llamando a funcion1:" << endl;
    funcion1();
    
    cout << "Llamando a funcion2:" << endl;
    funcion2();
    
    return 0;
}

// Definición de la función después del main
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}