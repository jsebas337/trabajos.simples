#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("caracteres_ascii.txt");

    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    // Escribir la lista de caracteres ASCII en el archivo
    for (int i = 0; i < 128; ++i) {
        archivo << static_cast<char>(i) << endl;
    }

    archivo.close();
    cout << "Archivo 'caracteres_ascii.txt' generado exitosamente." << endl;

    return 0;
}
