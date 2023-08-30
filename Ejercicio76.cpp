#include <iostream>
using namespace std;

// Funcion recursiva para calcular el factorial
int calcularFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: factorial de 0 y 1 es 1
    } else {
        return n * calcularFactorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int numero, factorial ;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es " << factorial << endl;
    }

    return 0;
}
