#include <iostream>

using namespace std;

int main() {
    int num;

    do {
        cout << "1. Mostrar lista por raza" << endl;
        cout << "2. Mostrar por puntos" << endl;
        cout << "3. Mostrar por edad" << endl;
        cout << "4. Localizar un perro por su nombre" << endl;
        cout << "5. Perro ganador de la exposici�n" << endl;
        cout << "6. Perro con el menor puntaje" << endl;
        cout << "7. Perro m�s viejo de todos" << endl;
        cout << "Ingrese un n�mero (0 para salir): ";
        
        cin >> num;

        switch (num) {
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opci�n no v�lida. Por favor, intente nuevamente." << endl;
        }
    } while (num != 0);

    return 0;
}

