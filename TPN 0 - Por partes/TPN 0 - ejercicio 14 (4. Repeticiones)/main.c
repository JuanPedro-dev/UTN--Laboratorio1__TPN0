#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /** 4) Leer 15 números negativos y convertirlos en positivos e imprimir dichos números.  */

    int number;

    printf("Devuelve el opuesto de los negativos.\n");
    for(int i = 1; i <= 15; i++){
        do{
            printf("\nIngrese un número negativo: ");
            scanf("%d", &number);
        } while (number > 0);

        printf("Su opuesto es: %d ", -number);
    }

    return 0;
    system("pause");
}
