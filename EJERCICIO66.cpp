#include <iostream>

using namespace std;
int calcularFactorial(int n);

int main() {
    int numero;
     cout << "BIENVENIDO A MI PROGRAMA PARA CALCULAR EL FACTORIAL" << endl ;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero < 0)
    {
       cout << "No se puede calcular el factorial de un numero negativo" << endl;
    }
    else{
    int factorial = calcularFactorial(numero);

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    return 0;
}


int calcularFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        int resultado = 1;
        for (int i = 2; i <= n; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}
