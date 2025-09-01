#include <iostream>
using namespace std;

int main() {
    int opcion, n;
    float num, resultado;

    cout << "Seleccione la operacion que desea hacer:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "escoja numero correspondiente a la operacion que quiere realizar: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Cuantos numeros quiere sumar? ";
        cin >> n;
        resultado = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;
            resultado += num;
        }
        cout << "Suma: " << resultado << endl;
    }
    else if (opcion == 2) {
        cout << "Cuantos numeros quiere restar? ";
        cin >> n;
        cin >> resultado; 
        for (int i = 1; i < n; i++) {
            cin >> num;
            resultado -= num;
        }
        cout << "Resta: " << resultado;
        if (resultado < 0) {
            cout << " (Nota: valor negativo = dinero que falta pagar o cambio a entregar)";
        }
        cout << endl;
    }
    else if (opcion == 3) {
        cout << "Cuantos numeros quiere multiplicar? ";
        cin >> n;
        resultado = 1;
        for (int i = 0; i < n; i++) {
            cin >> num;
            resultado *= num;
        }
        cout << "Multiplicacion: " << resultado;
        if (resultado < 0) {
            cout << " (Nota: valor negativo = dinero que falta pagar o cambio a entregar)";
        }
        cout << endl;
    }
    else if (opcion == 4) {
        float d1, d2;
        cout << "Ingrese el primer numero para dividir: ";
        cin >> d1;
        cout << "Ingrese el segundo numero para dividir: ";
        cin >> d2;
        if (d2 == 0) {
            cout << "Error: no se puede dividir entre cero" << endl;
        } else {
            float division = d1 / d2;
            cout << "Division: " << division;
            if (division < 0) {
                cout << " (valor negativo = dinero que falta pagar o cambio a entregar)";
            }
            cout << endl;
        }
    }
    else {
        cout << "no se puede." << endl;
    }

    return 0;
}
