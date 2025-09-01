#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
using namespace std;

string toLower(string s) {
    for (char &c : s) c = tolower(static_cast<unsigned char>(c));
    return s;
}

int main() {
    string tipo;
    int cantidad;
    double subtotal;

    cout << "=== Sistema de descuentos ===" << endl;
    cout << "Tipo de cliente (VIP / REGULAR): ";
    getline(cin, tipo);
    tipo = toLower(tipo);

    cout << "Cantidad de productos: ";
    cin >> cantidad;

    cout << "Subtotal (antes de descuento): ";
    cin >> subtotal;

    double descuento = 0.0;
    if (tipo == "vip") {
        descuento = 0.20; // 20% siempre
    } else {
        if (cantidad >= 4) descuento = 0.10; // 10% si compra 4 o más
    }

    double monto_desc = subtotal * descuento;
    double total = subtotal - monto_desc;

    cout << fixed << setprecision(2);
    cout << "\nResumen de la compra:" << endl;
    cout << "Cliente: " << tipo << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Monto de descuento: $" << monto_desc << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}