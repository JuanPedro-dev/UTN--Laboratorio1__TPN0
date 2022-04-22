#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
   /** 1) Suponga que un individuo desea invertir su capital en un banco y desea saber
        cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.*/

    float ganancia, capital;

    printf("Cálculo de ganancia en un mes.\n");
    do
    {
    printf("Introduce el capital: \n");
    scanf("%f", &capital);
    } while (capital < 0);

    ganancia = capital * .02;
    printf("Su ganancia es: %.2f.\n", ganancia);

    system("pause");
    return 0;
}
