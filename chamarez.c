#include "chamarez.h"
#include <stdlib.h>
#include <stdio.h>

int menuOpciones()
{
    int opcion;
    system("cls");
    printf("***menu de opciones***\n");
    printf("1-Ingrese primer operando\n");
    printf("2-Ingrese segundo operando\n");
    printf("3-Calcular todas las operaciones\n");
    printf("4-Informar resultados\n");
    printf("5-Salir\n");
    printf("Ingrese su opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}

int suma(int a, int b)
{

    return a+b;

}

int resta(int a, int b)
{

    return a-b;
}

float division(int a, int b)
{
    float dividir=0;
    if(b!=0)
    {
        dividir=(float)a/b;
    }
    return dividir;
}

int multiplicacion(int a, int b)
{

    return a*b;
}

int factorialRescursivo(int a)
{
    int fact;
    if(a==0 || a==1)
    {
        fact=1;
    }
    else
    {
        fact= a*factorialRescursivo(a-1);
    }
    return fact;
}
