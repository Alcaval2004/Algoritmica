#include <iostream>

using namespace std;

int main() {
    int valor = 1;
    while (valor <= 10) {
        cout << valor << endl;
        valor++;
    }
    
    valor = 10;
    while (valor >= 0) {
        cout << valor << endl;
        valor--;
    }
    return 0;
}