#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 0 al 30: ";
    cin >> numero;

    if (numero & 10)
        cout << "Puede leer mi parcero\n";

    if (numero & 22)
        cout << "Puede escribir perrito\n";

    if (numero & 29)
        cout << "Tiene permiso de ejecutar\n";

    return 0;
}
