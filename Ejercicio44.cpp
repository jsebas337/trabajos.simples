#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros; // Usamos un vector para almacenar los n�meros
    double suma = 0;
    
    cout << "Ingrese cinco numeros:" << endl;
    
    // Solicitar al usuario que ingrese cinco numeros
    for (int i = 0; i < 5; ++i) {
        double numero;
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero); // Agregar el numero al vector
        suma += numero;
    }
    
    // Calcular la media aritmetica
    double media = suma / 5.0;
    
    // Mostrar la media
    cout << "La media aritmetica de los numeros es: " << media << endl;
    
    return 0;
}
