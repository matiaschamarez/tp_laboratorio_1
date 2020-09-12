#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float obtenerNumeros(float num)
{
    float numero;
    printf("Ingrese un operando\n");
    scanf("%f", &numero);

    return numero;
}

float suma(float a, float b)
{
    float resultado;
    resultado= a + b;

    return resultado;
}

float resta(float a, float b)
{
    float resultado;
    resultado= a - b;

    return resultado;
}

float division(float a, float b)
{
    float resultado;
    resultado= a/b;


    return resultado;
}

float multiplicacion(float a, float b)
{
    float resultado;
    resultado= a*b;


    return resultado;
}

long long int factorial(float num)
{

    int factorial = 1;
    int i = 0;

    if(num<=0)
    {

        printf("\nNo es posible calcular el factorial de un numero negativo\n");

    }

    for (i = num; i > 0; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}
