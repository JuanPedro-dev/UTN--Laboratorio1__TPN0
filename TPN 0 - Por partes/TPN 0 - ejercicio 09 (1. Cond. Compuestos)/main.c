#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    /** 1) Leer 2 números; si son iguales que los multiplique, si el primero
        es mayor que el segundo que los reste y si no que los sume.*/
    int numeroA, numeroB,operacion;

    printf("Juego de dos números \n");
    printf("Introduce un número A: ");
    scanf("%d", &numeroA);
    printf("Introduce un número B: ");
    scanf("%d", &numeroB);

    if((numeroA >= numeroB))
    {
        if(numeroA > numeroB)
        {
            operacion = numeroA - numeroB;
            printf("%d", operacion);
        }else
        {
            operacion = numeroA * numeroA;
            printf("%d", operacion);
        }
    } else
    {
        operacion = numeroA + numeroB;
        printf("%d", operacion);
    }

// --------------------------------<>---------------------------------------

    /** Forma con conectores lógicos, pero pedia anidados.

    if (numeroA == numeroB){
        operacion = numeroA * numeroA;
        printf("%d", operacion);
    } else if (numeroA < numeroB){
        operacion = numeroA + numeroB;
        printf("%d", operacion);
    } else {
        operacion = numeroA - numeroB;
        printf("%d", operacion);
    } */

// --------------------------------<>---------------------------------------
    /** Forma con operador ternario, pero pedia anidados.

    operacion = ((numeroA == numeroB))
    ? operacion = numeroA * numeroB
    : (numeroA < numeroB)
    ? operacion = numeroA + numeroB
    : (numeroA > numeroB)
    ? operacion = numeroA - numeroB
    : 0;

    printf("%d", operacion);
  */

    return 0;
    system("pause");
}
