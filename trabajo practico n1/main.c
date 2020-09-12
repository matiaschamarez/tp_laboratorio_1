#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculadora.h"


int main()
{
    float num1;
    float num2;
    float funcionSuma;
    float funcionResta;
    float funcionDivision;
    float funcionMultiplicacion;
    int funcionFactorial;
    int funcionFactorial2;
    int opcionesM;
    char respuesta='5';

    do
    {

        system("cls");
        system("pause");
        printf("\n\n");
        printf("***menu de opciones***\n");
        printf("Seleccione la opcion que quiera\n");
        printf("1 - Ingrese primer operando\n");
        printf("2 - Ingrese segundo operando\n");
        printf("3 - Calcular todas las operaciones\n");
        printf("4 - Informar resultados\n");
        printf("5 - Salir\n");
        scanf("%d", &opcionesM);

        switch(opcionesM)
        {
        case 1:
            num1=obtenerNumeros(num1);
            break;

        case 2:
            num2=obtenerNumeros(num2);
            break;

        case 3:
            funcionSuma=suma(num1, num2);
            funcionResta=resta(num1, num2);
            funcionDivision=division(num1, num2);
            funcionMultiplicacion=multiplicacion(num1, num2);
            funcionFactorial=factorial(num1);
            funcionFactorial2=factorial(num2);
            break;

        case 4:
            printf("el resultado de %.2f+%.2f es: %.2f\n ", num1, num2, funcionSuma);
            printf("el resultado de %.2f-%.2f es: %.2f\n",num1, num2, funcionResta);
            printf("el resultado de %.2f/%.2f es: %.2f\n",num1, num2, funcionDivision);
            printf("el resultado de %.2f*%.2f es: %.2f\n",num1, num2, funcionMultiplicacion);
            printf("el factorial de %.2f es: %d\n",num1, funcionFactorial);
            printf("el factorial de %.2f es: %d\n",num2, funcionFactorial2);
            system("pause");
            break;

        case 5:
            printf("F");
            respuesta='g';
            break;

        }

    }
    while(respuesta=='5');

    return 0;
}
