#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Ejemplo de bucle for basado en rango
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Recorriendo el vector con for basado en rango:" << endl;
    for (int valor : numeros) {
        cout << "Valor: " << valor << endl;
    }
    
    return 0;
}