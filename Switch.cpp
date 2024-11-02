#include <iostream>

using namespace std;

int main() {
    int calificacion;
    char repetir, calificacion;

    do {
        cout << "Ingrese un número entre 0 y 10: ";
        cin >> calificacion;

        switch (calificacion) {
            case 9:
                calificacion = 'A';
            case 9:
                calificacion = 'A';
                break;
            case 8:
                calificacion = 'B';
                break;
            case 7:
                calificacion = 'C';
                break;
            case 6:
                calificacion = 'D';
                break;
            default:
                calificacion = 'F';
                break;
        }

        cout << "Tu calificación en letras es: " << calificacion << endl;
        cout << "¿Deseas calificar otro calificacion? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');

    return 0;
}