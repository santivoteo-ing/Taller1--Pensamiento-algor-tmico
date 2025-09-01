#include <iostream>
using namespace std;

int main() {
    int dia;
    string mes;
    
    cout << "Signo zodiacal" << endl;
    cout << "Dia de nacimiento: ";
    cin >> dia;
    
    if (dia < 1) {
    cout << "No se puede tener un dia menor a 1" << endl;
    return 0;
}
    if (dia > 31) {
        cout << "El dia no puede ser mayor a 31" << endl;
        return 0;
}
    
    cout << "Mes de nacimiento en minusculas: ";
    cin >> mes;
    
    if (mes == "enero") {
        if (dia >= 20) {
            cout << "Acuario" << endl;
        } else {
            cout << "Capricornio" << endl;
        }
    }
    else if (mes == "febrero") {
        if (dia >= 19) {
            cout << "Piscis" << endl;
        } else {
            cout << "Acuario" << endl;
        }
}
    else if (mes == "marzo") {
        if (dia >= 21) {
            cout << "Aries" << endl;
        } else {
            cout << "Piscis" << endl;
        }
}
    else if (mes == "abril") {
        if (dia >= 20) {
            cout << "Tauro" << endl;
        } else {
            cout << "Aries" << endl;
        }
}
    else if (mes == "mayo") {
        if (dia >= 21) {
            cout << "Geminis" << endl;
        } else {
            cout << "Tauro" << endl;
        }
}
    else if (mes == "junio") {
        if (dia >= 21) {
            cout << "Cancer" << endl;
        } else {
            cout << "Geminis" << endl;
        }
}
    else if (mes == "julio") {
        if (dia >= 23) {
            cout << "Leo" << endl;
        } else {
            cout << "Cancer" << endl;
        }
}
    else if (mes == "agosto") {
        if (dia >= 23) {
            cout << "Virgo" << endl;
        } else {
            cout << "Leo" << endl;
        }
}
    else if (mes == "septiembre") {
        if (dia >= 23) {
            cout << "Libra" << endl;
        } else {
            cout << "Virgo" << endl;
        }
}
    else if (mes == "octubre") {
        if (dia >= 23) {
            cout << "Escorpio" << endl;
        } else {
            cout << "Libra" << endl;
        }
}
    else if (mes == "noviembre") {
        if (dia >= 22) {
            cout << "Sagitario" << endl;
        } else {
            cout << "Escorpio" << endl;
        }
}
    else if (mes == "diciembre") {
        if (dia >= 22) {
            cout << "Capricornio" << endl;
        } else {
            cout << "Sagitario" << endl;
        }
}
    else {
        cout << "Mes no existente" << endl;
}
    
    return 0;
}
