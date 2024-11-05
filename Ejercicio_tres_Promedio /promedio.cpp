//
// Created by Pablo Alcolea Sesse on 5/11/24.
//
#include <iostream>
#include "promedio.h"
using namespace std;

double promedio() {
    int numero_notas = 10;
    double notas_sum = 0;
    double media;
    int i;
    for (int i = 0; i < numero_notas; i++) {
        int nota;
        std::cout << "Introduce la nota: ";
        std::cin >> nota;
        notas_sum += nota;
    }
    media = notas_sum/numero_notas;
    cout << media << endl;
    return media;
}