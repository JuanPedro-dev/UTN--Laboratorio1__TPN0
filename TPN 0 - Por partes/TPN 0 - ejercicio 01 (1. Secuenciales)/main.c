#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
   /** 1) Suponga que un individuo desea invertir su capital en un banco y desea saber
        cu�nto dinero ganar� despu�s de un mes si el banco paga a raz�n de 2% mensual.*/

    float ganancia, capital;

    printf("C�lculo de ganancia en un mes.\n");
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
