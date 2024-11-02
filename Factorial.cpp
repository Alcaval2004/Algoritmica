#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    cout << "Ingrese un número entero que no sea negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
    }

    return 0;
}
