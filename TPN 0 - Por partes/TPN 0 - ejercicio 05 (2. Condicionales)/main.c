#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
    /** 2) En un almacén se hace un 20% de descuento a los clientes cuya compra supere
        */
    setlocale(LC_ALL,"");
    char option;
    float total, descuento, conDescuento;

    printf("                         Cálculo de descuento en un almacén \n\n\n");

    do{
        printf("Monto total a pagar: ");
        scanf("%f", &total);
    } while(total<0);

    if (total>=5000){
        conDescuento = total * .8;
        printf("Con el 20 de descuento total: %.2f \n", conDescuento);
    } else {
        printf("No aplica descuento: %.2f \n", total);
    }
    return 0;
    system("pause");
}
