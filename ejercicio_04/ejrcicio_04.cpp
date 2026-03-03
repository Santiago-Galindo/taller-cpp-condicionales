. #include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Ingrese primer numero: ";
    cin >> a;

    cout << "Ingrese operador (+,-,*,/): ";
    cin >> op;

    cout << "Ingrese segundo numero: ";
    cin >> b;

    if (op == '+')
        cout << "Resultado: " << a + b;
    else if (op == '-')
        cout << "Resultado: " << a - b;
    else if (op == '*')
        cout << "Resultado: " << a * b;
    else if (op == '/')
        cout << "Resultado: " << a / b;
    else
        cout << "Operador incorrecto";

    return 0;
}
