.#include <iostream>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese tres lados: ";
    cin >> a, b, c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Es un triangulo valido\n";

        if (a == b && b == c)
            cout << "Equilatero";
        else if (a == b || a == c || b == c)
            cout << "Isosceles";
        else
            cout << "Escaleno";
    } else {
        cout << "No es un triangulo valido";
    }

    return 0;
}
