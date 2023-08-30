#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    
    cout << "Ingrese una frase: ";
    getline(cin, frase); // Leer la frase completa, incluyendo espacios en blanco
    
    // Invertir la frase
    string fraseAlReves = "";
    for (int i = frase.length() - 1; i >= 0; --i) {
        fraseAlReves += frase[i];
    }
    
    cout << "La frase al reves es: " << fraseAlReves << endl;
    
    return 0;
}
