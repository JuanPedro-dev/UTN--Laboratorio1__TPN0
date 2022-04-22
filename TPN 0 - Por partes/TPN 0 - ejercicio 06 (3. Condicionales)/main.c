#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    /** 6) Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
        Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas
        se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra. */

    int horas, total;


    printf("                                        Calcular el salario semanal. \n\n");

    do{
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%d", &horas);
    } while(horas < 0);

    if (horas<=40){
        total = horas * 300;
        printf("\nSalario $%d", total);
    } else {
        total = (12000 + (horas - 40) * 400);
        printf("\nSalario $%d \n", total);
    }


    system("pause");
    return 0;
}
