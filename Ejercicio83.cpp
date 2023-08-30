#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Funcion para sumar dos numeros binarios
string sumarBinarios(string binario1, string binario2) {
    // Convierte los numeros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la suma en entero
    int suma = numero1 + numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(suma).to_string();
}

// Funcion para restar dos numeros binarios
string restarBinarios(string binario1, string binario2) {
    // Convierte los numeros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la resta en entero
    int resta = numero1 - numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(resta).to_string();
}

// Funcion para multiplicar dos numeros binarios
string multiplicarBinarios(string binario1, string binario2) {
    // Convierte los numeros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la multiplicacion en entero
    int multiplicacion = numero1 * numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(multiplicacion).to_string();
}

// Funcion para dividir dos numeros binarios
string dividirBinarios(string binario1, string binario2) {
    // Convierte los numeros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la division en entero
    int division = numero1 / numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(division).to_string();
}

int main() {
    string binario1, binario2;
    
    cout << "Ingrese el primer numero binario: ";
    cin >> binario1;
    
    cout << "Ingrese el segundo numero binario: ";
    cin >> binario2;
    
    // Realiza operaciones en binario
    string suma = sumarBinarios(binario1, binario2);
    string resta = restarBinarios(binario1, binario2);
    string multiplicacion = multiplicarBinarios(binario1, binario2);
    string division = dividirBinarios(binario1, binario2);
    
    cout << "Suma en binario: " << suma << endl;
    cout << "Resta en binario: " << resta << endl;
    cout << "Multiplicacion en binario: " << multiplicacion << endl;
    cout << "Division en binario: " << division << endl;
    
    return 0;
}
