#include <iostream>
using namespace std;

int main() {
    double saldo = 1000000;
    int opcion;
    double dinero;

    cout << "1. Depositar\n2. Retirar\n3. Ver saldo\n";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Cuanto desea depositar? ";
        cin >> dinero;
        saldo = saldo + dinero;
    }
    else if (opcion == 2) {
        cout << "Cuanto desea retirar? ";
        cin >> dinero;
        saldo = saldo - dinero;
    }
    else if (opcion == 3) {
        cout << "Saldo actual: " << saldo;
    }

    cout << "\nSaldo final: " << saldo;

    return 0;
}
