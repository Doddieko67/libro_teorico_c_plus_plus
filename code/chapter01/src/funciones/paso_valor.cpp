#include <iostream>
using namespace std;

// Función para duplicar un valor (paso por valor)
void duplicar(int numero) {
    numero = numero * 2;  // Solo cambia la copia local
    cout << "Valor dentro de la funcion: " << numero << endl;
}

int main() {
    int valor = 10;
    cout << "Valor antes de la funcion: " << valor << endl;
    
    duplicar(valor);  // Pasamos una copia de 'valor'
    cout << "Valor despues de la funcion: " << valor << endl;  // Aun es 10!
    
    return 0;
}