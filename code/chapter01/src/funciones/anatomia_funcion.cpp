#include <iostream>
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

int main() {
    double area = calcularAreaRectangulo(10.0, 5.0);
    cout << "Area del rectangulo: " << area << endl;
    
    return 0;
}