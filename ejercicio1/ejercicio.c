/*
 * Trabajo Practico 3
 * Ejercicio <numero ejercicio>
 * Martín René - martinvilu
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision Profes
 */

#include "ejercicio.h"

bool es_primo(int numero)
{
    bool resultado = true;
    int i = 2;
    if(numero <= 1){
        resultado = false;
    }
    while (i < numero && resultado)
    {
        if(numero % i == 0){
            resultado = false;
        }
        i++;
    }
    return resultado;
}

