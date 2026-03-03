#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "\nValores originales:";
    cout << "\na = " << a;
    cout << "\nb = " << b << endl;

    // ===============================
    // METODO 1: Variable auxiliar
    // ===============================
    int x = a;
    int y = b;
    int aux;

    cout << "\n--- METODO 1: Con variable auxiliar ---\n";

    aux = x;
    cout << "Paso 1: aux = x -> aux = " << aux << endl;

    x = y;
    cout << "Paso 2: x = y -> x = " << x << endl;

    y = aux;
    cout << "Paso 3: y = aux -> y = " << y << endl;

    cout << "Resultado final: x = " << x << ", y = " << y << endl;


    // ===============================
    // METODO 2: Suma y resta
    // ===============================
    x = a;
    y = b;

    cout << "\n--- METODO 2: Con suma y resta ---\n";

    x = x + y;
    cout << "Paso 1: x = x + y -> x = " << x << endl;

    y = x - y;
    cout << "Paso 2: y = x - y -> y = " << y << endl;

    x = x - y;
    cout << "Paso 3: x = x - y -> x = " << x << endl;

    cout << "Resultado final: x = " << x << ", y = " << y << endl;


    // ===============================
    // METODO 3: Con XOR
    // ===============================
    x = a;
    y = b;

    cout << "\n--- METODO 3: Con XOR ---\n";

    x = x ^ y;
    cout << "Paso 1: x = x ^ y -> x = " << x << endl;

    y = x ^ y;
    cout << "Paso 2: y = x ^ y -> y = " << y << endl;

    x = x ^ y;
    cout << "Paso 3: x = x ^ y -> x = " << x << endl;

    cout << "Resultado final: x = " << x << ", y = " << y << endl;

    return 0;
}
