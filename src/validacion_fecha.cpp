#include <iostream> 
using namespace std;

const char* mes (int m) {
    const char* resultado = "Mes invalido";

    switch (m) {
        case 1:  resultado = "Enero"; break;
        case 2:  resultado = "Febrero"; break;
        case 3:  resultado = "Marzo"; break;
        case 4:  resultado = "Abril"; break;
        case 5:  resultado = "Mayo"; break;
        case 6:  resultado = "Junio"; break;
        case 7:  resultado = "Julio"; break;
        case 8:  resultado = "Agosto"; break;
        case 9:  resultado = "Septiembre"; break;
        case 10: resultado = "Octubre"; break;
        case 11: resultado = "Noviembre"; break;
        case 12: resultado = "Diciembre"; break;
        default: resultado = "Mes invalido"; break;
    }

    return resultado;
}

int main() {
    int dia, mes, año;
    char slash1, slash2; // para leer los  si no se pone no sirve//

    cout << "Ingrese su fecha de nacimiento en formato dd//mm//aa: " << endl;
    cin >> dia >> slash1 >> slash2 >> mes >> slash1 >> slash2 >> año;

    cout << "Fecha ingresada: " << dia << "//" << mes << "//" << año << endl;
    cout << "Mes ingresado: " << mes << " -> " << mes << endl;

    // validar q el mes exista
    if (mes < 1 || mes > 12) {
        cout << "ese mes no existe regrese a primaria porfavor."<< endl;
        return 0;
    }

    // Promocion: solo para Agosto
    if (mes == 8) {
        cout << "Felicidades, cumples en Agosto. eres elegible para la promocion." << endl;
    } else {
        cout << "No es Agosto. No eres elegible para la promocion." << endl;
    }

    return 0;
}
