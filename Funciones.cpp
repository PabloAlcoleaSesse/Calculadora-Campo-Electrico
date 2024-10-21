//
// Created by Pablo Alcolea Sesse on 21/10/24.
//

#include "Funciones.h"
#include <iostream>
#include <math.h>
#define K (9000000000)
using namespace std;


double campo_electrico() {
    cout << "Introduce el valor de su carga 1 en Coulombs (Introducir como numero decimal): " << endl;
    double carga;
    cin >> carga;
    cout << "Introduce su cordenada en x, su coordenada en y y su coordenada en z" << endl;
    float x;
    cin >> x;
    float y;
    cin >> y;
    float z;
    cin >> z;
    cout << "Introduce el punto en el que calcular el campo electrico" << endl;
    float x_final;
    cin >> x_final;
    float y_final;
    cin >> y_final;
    float z_final;
    cin >> z_final;

    float x_dif = x_final - x;
    float y_dif = y_final - y;
    float z_dif = z_final - z;
    float modulo = sqrt(pow(x_dif, 2) + pow(y_dif, 2) + pow(z_dif, 2));

    double campo =  (K * carga)/pow(modulo, 2);
    double campo_x = campo * (x_dif/modulo);
    double campo_y = campo * (y_dif/modulo);
    double campo_z = campo * (z_dif/modulo);

    printf ("El campo electrico en (%.2f, %.2f, %.2f) es = %.3lfi + %.3lfj + %.3lfk ", x, y,z, campo_x,campo_y,campo_z);
    }

double fuerza_electrica() {
    cout << "Introduce el valor de su carga 1 en Coulombs (Introducir como numero decimal): " << endl;
    double carga_1;
    cin >> carga_1;

    cout << "Introduce su cordenada en x, su coordenada en y y su coordenada en z" << endl;
    float x;
    cin >> x;
    float y;
    cin >> y;
    float z;
    cin >> z;

    cout << "Introduce la carga en Coulomb de la caraga sobre la que se aplica la fuerza" << endl;
    double carga_2;
    cin >> carga_2;

    cout << "Introduce el punto en el que calcular el campo electrico" << endl;
    float x_final;
    cin >> x_final;
    float y_final;
    cin >> y_final;
    float z_final;
    cin >> z_final;

    float x_dif = x_final - x;
    float y_dif = y_final - y;
    float z_dif = z_final - z;
    float modulo = sqrt(pow(x_dif, 2) + pow(y_dif, 2) + pow(z_dif, 2));

    double fuerza =  (K * carga_1 * carga_2)/pow(modulo, 2);
    double fuerza_x = fuerza * (x_dif/modulo);
    double fuerza_y = fuerza * (y_dif/modulo);
    double fuerza_z = fuerza * (z_dif/modulo);
printf ("La fuerza electrica en (%.2f, %.2f, %.2f) es = %.3lfi + %.3lfj + %.3lfk ", x, y,z, fuerza_x,fuerza_y,fuerza_z);

}
