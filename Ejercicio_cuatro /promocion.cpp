//
// Created by Pablo Alcolea Sesse on 5/11/24.
//
#include <iostream>
#include "promocion.h"
using namespace std;

double descuento() {
    double a;
    double b;
    double c;
    cout << "Introduce el precio del prime producto: ";
    cin >> a;
    cout << "Introduce el precio del segundo producto: ";
    cin >> b;
    cout << "Introduce el precio del tercer producto: ";
    cin >> c;

    if (a < b && a < c) {
        cout << "El precio final es de " << b + c << endl;
    } else if (b < a && b < c) {
        cout << "El precio final es de: " << a + c << endl;
    } else {
        cout << "El precio final es de: " << a + b << endl;
    }
}