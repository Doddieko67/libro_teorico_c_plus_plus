#include <iostream>

int main() {
    // Ejemplo de declaración e inicialización de variables
    
    // Inicialización por copia
    int valor1 = 10;
    
    // Inicialización directa
    int valor2(20);
    
    // Inicialización uniforme (recomendada en C++ moderno)
    int valor3{30};
    
    // Mostrar valores iniciales
    std::cout << "Valor1 (inicialización por copia): " << valor1 << std::endl;
    std::cout << "Valor2 (inicialización directa): " << valor2 << std::endl;
    std::cout << "Valor3 (inicialización uniforme): " << valor3 << std::endl;
    
    return 0;
}