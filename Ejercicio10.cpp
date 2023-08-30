#include <iostream>
#include <cmath> // Necesario para la funcion sqrt()

using namespace std;

int main() {
    double lado1, lado2, hipotenusa;

    // Solicitar al usuario que ingrese la longitud de los dos lados
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    // Calcular la hipotenusa utilizando el teorema de Pit�goras
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

    // Mostrar el resultado
    cout << "La hipotenusa del triangulo rectangulo es: " << hipotenusa << endl;

    return 0;
}
