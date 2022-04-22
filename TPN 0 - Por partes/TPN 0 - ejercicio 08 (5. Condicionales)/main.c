#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /** 5) Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
        Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la
        compra y si son menos de tres camisas un descuento del 10% */

    int contador = 0;
    float precio;
    float total = 0;
    float totalDescuento;

    printf("Descuento en una compra mayor o igual a 3 prendas\n");

    do{
        printf("Introduce el precio de la camisa o 0 para terminar.\n");
        printf("Precio: $");
        scanf("%f", &precio);

        if (precio > 0 ){
            system("cls");
            total += precio;
            contador++;
        } else if (precio < 0){
            system("cls");
            printf("Error no se admiten valores negativos.\n");
        }

    } while(precio != 0);

    if (contador >= 3){
        totalDescuento = total *.8;
        printf("El precio final con 20%% de descuento: %.2f", totalDescuento);
    } else {
        totalDescuento = total *.9;
        printf("El precio final con 10%% de descuento: %.2f", totalDescuento);
    }

    return 0;
    system("pause");
}
