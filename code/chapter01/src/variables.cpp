#include <iostream>

int main() {
    // Ejemplo de tipos fundamentales
    int edad = 30;           // Número entero
    double precio = 19.99;   // Número con decimales
    char inicial = 'A';      // Un solo carácter
    bool es_estudiante = true; // Valor booleano
    
    // Mostrar los valores
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Precio: " << precio << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "Es estudiante: " << es_estudiante << std::endl;
    
    // Ejemplos de declaración e inicialización
    int valor1 = 10;     // Inicialización por copia
    int valor2(20);      // Inicialización directa
    int valor3{30};      // Inicialización uniforme (recomendada)
    
    // Mostrar valores iniciales
    std::cout << "Valor1: " << valor1 << std::endl;
    std::cout << "Valor2: " << valor2 << std::endl;
    std::cout << "Valor3: " << valor3 << std::endl;
    
    // Constantes
    const double PI = 3.14159265359;
    const int MAX_INTENTOS = 3;
    
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Máximos intentos: " << MAX_INTENTOS << std::endl;
    
    return 0;
}