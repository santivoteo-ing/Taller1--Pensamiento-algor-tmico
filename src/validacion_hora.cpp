#include <iostream>
using namespace std;

int main() {
    int horas, minutos;
    cout << "Revisar hora de entrada y salida" << endl;
    cout << "Ingrese las horas de forma militar: ";
    cin >> horas;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    if (horas < 0) {
        cout << "Las horas no pueden ser negativas" << endl;
}
    else if (horas > 23) {
        cout << "Las horas no pueden ser mas de 23" << endl;
}
    
    else if (minutos < 0) {
        cout << "Los minutos no pueden ser negativos" << endl;
}
    else if (minutos > 59) {
        cout << "Los minutos no pueden ser mas de 59" << endl;
}
    else {
        cout << "Hora aceptada: ";
        if (horas < 10) {
            cout << "0" << horas;
        } else {
            cout << horas;
        }
        cout << ":";
        if (minutos < 10) {
            cout << "0" << minutos;
        } else {
            cout << minutos;
        }
}
    return 0;
}
