#include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese el año: ";
    cin >> año;

    if (año % 4 == 0)
        cout << "Es bisiesto";
    else
        cout << "No es bisiesto";

    return 0;
}
