/*
 * Trabajo Practico 3
 * Ejercicio <numero ejercicio>
 * Martín René - martinvilu
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision Profes
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio.h"
#include <stdbool.h>

void probar_primo(int numero, char mensaje[], bool esperado)
{
    int dio = es_primo(numero);
    printf("Probando %s con %d, debiera de dar %d y dio %d\n", mensaje, numero, esperado, dio);
    //assert(numero == dio);
}

int main()
{
    printf("Probando es_primo \n");
    probar_primo(7, "Naturalmente primo", true);
    probar_primo(1, "Naturalmente primo", true);
    probar_primo(10, "este no es primo", true);
    for(int i = 1 ; i < 1000; i++)
    {
        probar_primo(i, "lazo!", false);
    }
    return 0;
}
