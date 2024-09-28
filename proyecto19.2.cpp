#include <iostream>

using namespace std;

struct Perro {
    string nombre;
    string raza;
    int edad;
    int puntos;
};

const int MAX_PERROS = 10;

int main() {
    Perro perros[MAX_PERROS];
    int cantidad = 0;
    int opcion;

    do {
        cout << "Menú:" << endl;
        cout << "1. Mostrar lista de perros" << endl;
        cout << "2. Registrar un nuevo perro" << endl;
        cout << "3. Buscar perro por nombre" << endl;
        cout << "4. Buscar perro con mayor puntaje" << endl;
        cout << "5. Buscar perro con menor puntaje" << endl;
        cout << "6. Buscar perro más viejo" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        if (opcion == 1) {
         
            for (int i = 0; i < cantidad; ++i) {
                cout << "Nombre: " << perros[i].nombre << ", Raza: " << perros[i].raza
                     << ", Edad: " << perros[i].edad << ", Puntos: " << perros[i].puntos << endl;
            }
        } else if (opcion == 2) {
            if (cantidad >= MAX_PERROS) {
                cout << "No se pueden registrar más perros." << endl;
            } else {
                cout << "Ingrese nombre del perro: ";
                cin >> perros[cantidad].nombre;
                cout << "Ingrese raza del perro: ";
                cin >> perros[cantidad].raza;
                cout << "Ingrese edad del perro: ";
                cin >> perros[cantidad].edad;
                cout << "Ingrese puntos del perro: ";
                cin >> perros[cantidad].puntos;
                cantidad++;
                cout << "Perro registrado exitosamente." << endl;
            }
        } else if (opcion == 3) {
            string nombre;
            cout << "Ingrese nombre del perro: ";
            cin >> nombre;

            for (int i = 0; i < cantidad; ++i) {
                if (perros[i].nombre == nombre) {
                    cout << "Nombre: " << perros[i].nombre << ", Raza: " << perros[i].raza
                         << ", Edad: " << perros[i].edad << ", Puntos: " << perros[i].puntos << endl;
                    break;
                }
            }
        } else if (opcion == 4) {
            int maxIndex = 0;
            for (int i = 1; i < cantidad; ++i) {
                if (perros[i].puntos > perros[maxIndex].puntos) {
                    maxIndex = i;
                }
            }
            cout << "Perro con mayor puntaje: " << perros[maxIndex].nombre << " con " << perros[maxIndex].puntos << " puntos." << endl;
        } else if (opcion == 5) {
            int minIndex = 0;
            for (int i = 1; i < cantidad; ++i) {
                if (perros[i].puntos < perros[minIndex].puntos) {
                    minIndex = i;
                }
            }
            cout << "Perro con menor puntaje: " << perros[minIndex].nombre << " con " << perros[minIndex].puntos << " puntos." << endl;
        } else if (opcion == 6) {
            int viejoIndex = 0;
            for (int i = 1; i < cantidad; ++i) {
                if (perros[i].edad > perros[viejoIndex].edad) {
                    viejoIndex = i;
                }
            }
            cout << "Perro más viejo: " << perros[viejoIndex].nombre << " con " << perros[viejoIndex].edad << " años." << endl;
        } else if (opcion != 0) {
            cout << "Opción no válida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
