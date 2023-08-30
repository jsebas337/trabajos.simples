#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main() {
    int horasLimite, minutosLimite, segundosLimite;

    // Ingresar el tiempo límite
    cout << "Ingrese el tiempo limite:" << endl;
    cout << "Horas: ";
    cin >> horasLimite;
    cout << "Minutos: ";
    cin >> minutosLimite;
    cout << "Segundos: ";
    cin >> segundosLimite;

    // Calcular el tiempo límite en segundos
    int tiempoLimiteTotal = horasLimite * 3600 + minutosLimite * 60 + segundosLimite;

    int horas = 0, minutos = 0, segundos = 0;
    int tiempoTranscurrido = 0;

    // Cronómetro
    while (tiempoTranscurrido < tiempoLimiteTotal) {
        this_thread::sleep_for(chrono::seconds(1));
        ++tiempoTranscurrido;

        // Actualizar horas, minutos y segundos
        horas = tiempoTranscurrido / 3600;
        minutos = (tiempoTranscurrido % 3600) / 60;
        segundos = tiempoTranscurrido % 60;

        // Mostrar el tiempo cronometrado
        cout << "\rTiempo cronometrado: " << horas << "h " << minutos << "m " << segundos << "s" << flush;
    }

    cout << endl << " Tiempo limite alcanzado " << endl;

    return 0;
}
