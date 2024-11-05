//
// Created by Pablo Alcolea Sesse on 5/11/24.
//

/*
*Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero.
El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero".*/

#include <iostream>
#include "comparador.h"
using namespace std;

void comparador() {
    int a;
    cout << "Introduce un número entero: ";
    cin >> a;

    if (a > 0) {
        cout << "El número " << a << " es positivo." << endl;
    } else if (a < 0) {
        cout << "El número " << a << " es negativo." << endl;
    } else {
        cout << "El número " << a << " es cero." << endl;
    }
}