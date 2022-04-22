#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    /** 2) Leer 10 números y obtener su cubo y su cuarta.*/

    int number;
    int cubo;
    int cuarta;

    printf("Dado un número, devuelve su cubo y cuarta.");
    for(int i = 1; i <= 10; i++){
        printf("\nIngrese el %d/10 numero: ", i);
        scanf("%d", &number);
        cubo = pow(number, 3);
        cuarta = pow(number, 4);
        printf("Número: %d =>> cubo: %d y cuarta: %d \n", number, cubo, cuarta);
    }
    return 0;
    system("pause");
}
