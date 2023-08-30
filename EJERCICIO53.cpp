
#include <iostream>
#include <vector>
using namespace std;

bool num_verificar(int numero) {
    if (numero <= 1)
        return false;
    
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int inicio, final;
    cout << "BIENVENIDO A MI PROGRAMA DE LOS NUMERO PRIMOS" << endl ;
    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;
    cout << "Ingrese el fin del rango: ";
    cin >> final;

    vector<int> verificar_numberos;

    for (int num = inicio; num <= final; ++num) {
        if (num_verificar(num)) {
            verificar_numberos.push_back(num);
        }
    }

    cout << "Numeros primos en el rango [" << inicio << ", " << final << "]: ";
    for (int verificar : verificar_numberos) {
        cout << verificar << " ";
    }
    cout << endl;

    return 0;
}