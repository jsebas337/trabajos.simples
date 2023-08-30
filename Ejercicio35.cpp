#include <iostream>
using namespace std;

int main() {
    int numero;
    float factorial = 1; // Usamos unsigned long long para manejar factoriales grandes

    // Solicitar al usuario que ingrese un n�mero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no est� definido para n�meros negativos." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i; // Multiplicar el factorial por i en cada iteraci�n
        }
        cout << "El factorial de " << numero << " es " << factorial << endl;
    }

    return 0;
}
