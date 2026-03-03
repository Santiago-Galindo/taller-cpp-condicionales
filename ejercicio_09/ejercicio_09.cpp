#include <iostream>
using namespace std;

int main() {
    float peso, altura;

    cout << "Peso (kg): ";
    cin >> peso;
    cout << "Altura (m): ";
    cin >> altura;

    float imc = peso / (altura * altura);

    cout << "IMC: " << imc << endl;

    if (imc < 18.5)
        cout << "Bajo peso";
    else if (imc < 25)
        cout << "Normal";
    else if (imc < 30)
        cout << "Sobrepeso";
    else if (imc < 35)
        cout << "Obesidad I";
    else
        cout << "Obesidad II";

    return 0;
}
