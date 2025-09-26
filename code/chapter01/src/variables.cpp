#include <iostream>

int main() {
    // Ejemplo de declaración e inicialización de variables
    int edad = 30;           // Inicialización por copia
    int cantidad(100);       // Inicialización directa
    int puntuacion{0};       // Inicialización uniforme (recomendada)
    
    // Mostrar los valores
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Cantidad: " << cantidad << std::endl;
    std::cout << "Puntuación: " << puntuacion << std::endl;
    
    // Constantes
    const double PI = 3.14159265359;
    const int MAX_INTENTOS = 3;
    
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Máximos intentos: " << MAX_INTENTOS << std::endl;
    
    return 0;
}