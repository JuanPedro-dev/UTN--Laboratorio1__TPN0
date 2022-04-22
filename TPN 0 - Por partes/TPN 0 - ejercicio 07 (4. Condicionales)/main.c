#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
// validar si es un string
int main()
{
    setlocale(LC_ALL,"");
    /** 4) Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente */
    int numeroA, numeroB;

    printf("                       Imprimir números ascendentes en un rango\n\n");
    printf("Ingrese un número A: ");
    scanf("%d", &numeroA);
    printf("Ingrese un número B: ");
    scanf("%d", &numeroB);

    if (numeroA <= numeroB){
        for(numeroA; numeroA <= numeroB; numeroA++){
            printf("%d \n", numeroA);
        }
    } else {
            for(numeroB; numeroB <= numeroA; numeroB++){
            printf("%d \n", numeroB);
        }
    }
    return 0;
    system("pause");
}
