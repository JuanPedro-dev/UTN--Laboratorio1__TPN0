#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    /** 2) Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
        desea saber cuánto deberá pagar finalmente por su compra. */

    float total,conDescuesto;

    printf("Cálculo de 15%% descuento. ");
    do
    {
    printf("\nTotal de la compra: ");
    scanf("%f", &total);
    } while (total < 0);

    conDescuesto = total * 0.85;
    printf("\nTotal con descuesto: %.2f. \n", conDescuesto);

    system("pause");
    return 0;
}
