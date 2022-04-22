#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    /** 2) Leer tres n�meros diferentes e imprimir el n�mero mayor de los tres. */

    int maximo = 0;
    int numeroA, numeroB, numeroC;
    // int input;

    printf("Imprime el mayor de 3 n�meros \n");

    printf("\nIntroduce el 1er n�mero: ");
    scanf("%d", &numeroA);
    printf("\nIntroduce el 2do n�mero: ");
    scanf("%d", &numeroB);
    printf("\nIntroduce el 3er n�mero: ");
    scanf("%d", &numeroC);

    if(numeroA >= numeroB) // A > B
    {
        if (numeroA >= numeroC) // A > B > C o A > C > B
        {
        printf("\nEl mayor de la triada es: %d \n", numeroA);
        } else // C > A > B
        {
        printf("\nEl mayor de la triada es: %d \n", numeroC);
        }
    }
    else // B > A
    {
        if(numeroB >= numeroC) // B > A > C o B > C > A
           {
            printf("\nEl mayor de la triada es: %d \n", numeroB);
           }
        else // C > B > A
        {
        printf("\nEl mayor de la triada es: %d \n", numeroC);
        }
    }

// ---------------------------------------<>------------------------------
    /** Forma con conectores l�gicos, pero pedia anidados.

    if((numeroA >= numeroB) && (numeroA >= numeroC){
        printf("\nEl mayor de la triada es: %d \n", numeroA);
    } else if (numeroB > numeroA && numeroB > numeroC){
        printf("\nEl mayor de la triada es: %d \n", numeroB);
    } else {
        printf("\nEl mayor de la triada es: %d \n", numeroC);
    }
    */

// ---------------------------------------<>------------------------------

   /** Forma con For, pero pedia anidados. Lo bueno es que ahorro memoria, pero
        gasto mas CPU porque compara todos los n�mero si o si.

    for(int i=1; i<=3; i++){
        printf("\nIntroduce el %d� numero: ", i);
        scanf("%d", &input);
        if (input > maximo && input>0){
            maximo = input;
        }
    }
    printf("\nEl mayor de la triada es: %d \n", maximo);
    */
    return 0;
    sytem("pause");
}
