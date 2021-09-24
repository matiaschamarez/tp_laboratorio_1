#include <stdio.h>
#include <stdlib.h>
#include "chamarez.h"



int main()
{
    int flagPrimerOperando=0;
    int flagCalculos=0;
    int flagSegundoOperando=0;
    int primerOperando;
    int segundoOperando;
    int sumar;
    int restar;
    float dividir;
    int multiplicar;
    int factorialDelPrimerNumero;
    int factorialDelSegundoNumero;
    char seguir='s';

    do
    {

        switch(menuOpciones())
        {
        case 1:
            printf("ingrese el primer operando\n");
            scanf("%d", &primerOperando);
            flagPrimerOperando=1;
            break;
        case 2:
            if(flagPrimerOperando==0)
            {
                printf("No se puede ingresar el segundo operando si no ingreso el primero.\n");
            }
            else
            {
                printf("Ingrese segundo operando\n");
                scanf("%d", &segundoOperando);
                flagSegundoOperando=1;
            }
            break;
        case 3:
            if(flagSegundoOperando==0)
            {
                printf("no se puede calcular los operandos si no los ingreso el usuario\n");
            }
            else
            {
                sumar=suma(primerOperando, segundoOperando);
                restar=resta(primerOperando, segundoOperando);
                dividir=division(primerOperando, segundoOperando);
                multiplicar=multiplicacion(primerOperando, segundoOperando);
                factorialDelPrimerNumero=factorialRescursivo(primerOperando);
                factorialDelSegundoNumero=factorialRescursivo(segundoOperando);
                flagCalculos=1;
            }
            break;
        case 4:
            if(flagSegundoOperando)
            {
                if(flagCalculos)
                {
                    printf("El resultado de A+B es: %d\n", sumar);
                    printf("El resultado de A-B es: %d\n", restar);
                    if(segundoOperando!=0)
                    {
                        printf("El resultado de A/B es: %.4f\n", dividir);
                    }
                    else
                    {
                        printf("No se puede dividir por 0\n");
                    }
                    printf("El resultado de A*B es: %d\n", multiplicar);
                    printf("El factorial de A es: %d y el factorial de B es: %d\n", factorialDelPrimerNumero, factorialDelSegundoNumero);
                    flagCalculos=0;
                    flagPrimerOperando=0;
                    flagSegundoOperando=0;
                }
                else
                {
                    printf("no se puede mostrar los datos si antes no lo calculaste.\n");
                }
            }
            else
            {
                printf("no se puede mostrar los calculos si antes no ingreso los operandos\n");
            }
            break;
        case 5:
            seguir='n';
            break;
        default:
            printf("Error, ingrese la opcion correcta\n");
            break;

        }



        system("pause");
    }
    while(seguir=='s');




    return 0;
}







