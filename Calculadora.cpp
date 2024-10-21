//
// Created by Pablo Alcolea Sesse on 21/10/24.
//

#include <iostream>
#include "Funciones.h"

#define K (9000000000)
using namespace std;

int main() {
    string eleccion;
    cout << "¿Que quiere calcular? (Campo, Fuerza)" << endl;
    cin >> eleccion;
    std::transform(eleccion.begin(), eleccion.end(), eleccion.begin(), ::tolower);
    if (eleccion == "campo") {
        campo_electrico();
    }
    else if (eleccion == "fuerza") {
        fuerza_electrica();
    }
    else {
        cout << "Introduce una opcion valida" << endl;
    }

}
