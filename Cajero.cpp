#include <iostream>
using namespace std;

class Cajero {
private:
    double saldo;

public:
    Cajero() : saldo(0.0) {}

    void consultarSaldo() {
        cout << "Tu saldo actual es: " << saldo << endl;
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Has depositado: " << cantidad << endl;
        } else {
            cout << "La cantidad a depositar debe ser mayor que cero." << endl;
        }
    }

    void retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
            cout << "Has retirado: " << cantidad << endl;
        } else if (cantidad > saldo) {
            cout << "Fondos insuficientes." << endl;
        } else {
            cout << "La cantidad a retirar debe ser mayor que cero." << endl;
        }
    }
};

int main() {
    Cajero cajero;
    int opcion;
    double cantidad;

    do {
        cout << "\n--- Cajero Automático ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cajero.consultarSaldo();
                break;
            case 2:
                cout << "Ingresa la cantidad a depositar: ";
                cin >> cantidad;
                cajero.depositar(cantidad);
                break;
            case 3:
                cout << "Ingresa la cantidad a retirar: ";
                cin >> cantidad;
                cajero.retirar(cantidad);
                break;
            case 4:
                cout << "Gracias por usar el cajero automático." << endl;
                break;
            default:
                cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}