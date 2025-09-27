#include <iostream>
#include <vector>
using namespace std;

int main() {
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
    
    return 0;
}