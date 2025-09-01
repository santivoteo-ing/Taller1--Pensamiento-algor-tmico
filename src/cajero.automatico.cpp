#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int PIN_CORRECTO = 1234; // demo
    double saldo = 100000.0;       // saldo inicial
    int intentos = 0;
    int pin;

    cout << "=== Cajero Automatico Seguro ===" << endl;

    // Validación del PIN
    while (intentos < 3) {
        cout << "Ingrese su PIN de 4 digitos: ";
        if (!(cin >> pin)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida." << endl;
            continue;
        }
        if (pin == PIN_CORRECTO) break;
        intentos++;
        cout << "PIN incorrecto. Intentos restantes: " << (3 - intentos) << endl;
    }

    if (intentos == 3) {
        cout << "Tarjeta bloqueada por demasiados intentos." << endl;
        return 0;
    }

    int opcion = 0;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Retirar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Saldo disponible: $" << saldo << endl;
        } else if (opcion == 2) {
            double monto;
            cout << "Monto a depositar: ";
            if (cin >> monto && monto > 0) {
                saldo += monto;
                cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Monto invalido." << endl;
            }
        } else if (opcion == 3) {
            double monto;
            cout << "Monto a retirar: ";
            if (cin >> monto && monto > 0) {
                if (monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Fondos insuficientes. Saldo: $" << saldo << endl;
                }
            } else {
                cout << "Monto invalido." << endl;
            }
        } else if (opcion == 4) {
            cout << "Gracias por usar el cajero." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 4);

    return 0;
}
