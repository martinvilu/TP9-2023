/*
 * Trabajo Practico 3
 * Ejercicio 1
 * Martín René - martinvilu
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision Profes
 */

#include <stdio.h>
#include "ejercicio.h"

int main()
{
    int numero;
    printf("Ejercicio 1\n");
    printf("Ingresa un numero para saber si es primo o no\n");
    scanf("%d", &numero);
    printf("El numero %d ", numero);
    if(es_primo(numero))
    {
        printf("es");
    }
    else
    {
        printf("no es");
    }
    printf(" un numero primo.\n");

    return 0;
}
