#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    int codigo;
    string nombre;
    string apellido;
    string carrera;
    bool estado;
};

// Función para agregar un alumno a la lista
void agregarAlumno(vector<Alumno>& listaAlumnos, Alumno alumno) {
    listaAlumnos.push_back(alumno);
}

// Función para mostrar la lista de alumnos
void mostrarAlumnos(const vector<Alumno>& listaAlumnos) {
    for (const Alumno& alumno : listaAlumnos) {
        cout << "Codigo: " << alumno.codigo << endl;
        cout << "Nombre: " << alumno.nombre << " " << alumno.apellido << endl;
        cout << "Carrera: " << alumno.carrera << endl;
        cout << "Estado: " << (alumno.estado ? "Activo" : "Inactivo") << endl;
        cout << "-----------------------" << endl;
    }
}

// Función para guardar la lista de alumnos en un archivo
void guardarAlumnosEnArchivo(const vector<Alumno>& listaAlumnos, const string& archivo) {
    ofstream archivoSalida(archivo);

    if (archivoSalida.is_open()) {
        for (const Alumno& alumno : listaAlumnos) {
            archivoSalida << alumno.codigo << " "
                          << alumno.nombre << " "
                          << alumno.apellido << " "
                          << alumno.carrera << " "
                          << alumno.estado << endl;
        }
        archivoSalida.close();
        cout << "Datos guardados en el archivo." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

int main() {
    vector<Alumno> listaAlumnos;
    string archivo = "alumnos.txt";

    // Aquí podrías cargar los datos existentes del archivo a 'listaAlumnos'

    int opcion;
    do {
        cout << "1. Agregar alumno" << endl;
        cout << "2. Mostrar alumnos" << endl;
        cout << "3. Guardar y salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            Alumno nuevoAlumno;
            cout << "Ingrese codigo: ";
            cin >> nuevoAlumno.codigo;
            cout << "Ingrese nombre: ";
            cin >> nuevoAlumno.nombre;
            cout << "Ingrese apellido: ";
            cin >> nuevoAlumno.apellido;
            cout << "Ingrese carrera: ";
            cin >> nuevoAlumno.carrera;
            cout << "Ingrese estado (1 para activo, 0 para inactivo): ";
            cin >> nuevoAlumno.estado;
            agregarAlumno(listaAlumnos, nuevoAlumno);
        } else if (opcion == 2) {
            mostrarAlumnos(listaAlumnos);
        } else if (opcion == 3) {
            guardarAlumnosEnArchivo(listaAlumnos, archivo);
        } else {
            cout << "Opción invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);

    return 0;
}
