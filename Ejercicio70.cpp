#include <iostream>
#include <cmath> // Necesario para la funci�n sqrt
using namespace std;

// Funci�n para calcular la distancia entre dos puntos
double calcularDistancia(double x1, double y1, double x2, double y2) {
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main() {
    double x1, y1, x2, y2;

    // Solicitar al usuario que ingrese las coordenadas de los dos puntos
    cout << "Ingrese las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;

    // Calcular la distancia utilizando la funci�n calcularDistancia
    double distancia = calcularDistancia(x1, y1, x2, y2);

    // Mostrar la distancia calculada
    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    return 0;
}
