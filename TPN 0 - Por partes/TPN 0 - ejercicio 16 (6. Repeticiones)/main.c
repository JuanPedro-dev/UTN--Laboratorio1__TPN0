#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    /** 6) Calcular e imprimir la tabla de multiplicar de un número cualquiera.
        Imprimir el multiplicando, el multiplicador y el producto. */

    int number, numberEnd, producto;

    do
    {
        system("cls");
        printf("Tabla de multiplicar. \n");
        printf("¿Qué número desea usar para la tabla?: ");
        scanf("%d", &number);
    }while (number < 0);
    do
    {
        system("cls");
        printf("¿Hasta que número desea la tabla?: ");
        scanf("%d", &numberEnd);
    } while (numberEnd < 0);

    for(int i = 0; i <= numberEnd; i++)
    {
        producto = number * i;
        printf("%d * %i : %d. \n", number, i, producto);
    }

    return 0;
    system("pause");
}
