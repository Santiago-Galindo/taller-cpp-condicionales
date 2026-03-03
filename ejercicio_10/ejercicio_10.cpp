// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char tipo;
    double compra;
    bool finDeSemana;
    double descuento = 0;

    cout << "Tipo de cliente (V=VIP, N=corrientazo): ";
    cin >> tipo;
    cout << "Monto de compra: ";
    cin >> compra;
    cout << "Es fin de semana? (1=Si, 0=No): ";
    cin >> finDeSemana;

    if (tipo == 'V')
        descuento += 0.20;
    else
        descuento += 0.10;

    if (compra > 15000)
        descuento += 0.05;

    if (finDeSemana)
        descuento += 0.05;

    if (descuento > 0.50)
        descuento = 0.50;

    double precioFinal = compra - (compra * descuento);

    cout << "Precio final: " << precioFinal;

    return 0;
}
