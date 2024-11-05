//
// Created by Pablo Alcolea Sesse on 5/11/24.
//
/*
Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7.
El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).
 */
#include "semana.h"
#include <iostream>

void asignador() {
    int dia;
    std::cout << "Introduce un número del 1 al 7: ";
    std::cin >> dia;
    switch (dia) {
        case 1:
            std::cout << "Lunes" << std::endl;
            break;
        case 2:
            std::cout << "Martes" << std::endl;
            break;
        case 3:
            std::cout << "Miércoles" << std::endl;
            break;
        case 4:
            std::cout << "Jueves" << std::endl;
            break;
        case 5:
            std::cout << "Viernes" << std::endl;
            break;
        case 6:
            std::cout << "Sábado" << std::endl;
            break;
        case 7:
            std::cout << "Domingo" << std::endl;
            break;
        default:
            asignador();
            break;
    }

}
