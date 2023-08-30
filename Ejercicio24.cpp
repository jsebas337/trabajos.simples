#include <iostream>
using namespace std;

int main() {
    double importeBruto, importeNeto;

    // Solicitar al usuario que ingrese el importe bruto de la factura
    cout << "Ingrese el importe bruto de la factura: ";
    cin >> importeBruto;

    if (importeBruto < 20000) {
        // Sin descuento si el importe bruto es menor que 20,000
        importeNeto = importeBruto;
    } else {
        // Aplicar un descuento del 15% si el importe bruto es mayor o igual a 20,000
        importeNeto = importeBruto - (0.15 * importeBruto);
    }

    // Mostrar el importe neto resultante
    cout << "El importe neto de la factura es: " << importeNeto << endl;

    return 0;
}
