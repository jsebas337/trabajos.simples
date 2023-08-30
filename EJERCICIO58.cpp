#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string frase;
    cout << "BIENVENIDO A MI PROGRAMA" << endl ;
    cout << "INGRESA UNA FRASE: ";
    getline(cin, frase);

    for (char &x : frase) {
        if (islower(x)) {
            x = toupper(x);
        } else if (isupper(x)) {
            x = tolower(x);
        }
    }

      cout << "FRASE CONVERTIDA: " << frase << endl;

    return 0;
}
