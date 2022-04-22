#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    /** 3. Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres
    hay en un grupo de estudiantes. */

    int hombres, mujeres;
    double porcentajeDeHombres;

    printf("Porcentaje de hombres y mujeres en un grupo. \n\n");
    do
    {
        printf("¿Cantidad de hombres?: ");
        scanf("%i", &mujeres);
    }while (mujeres < 0);
    do
    {
        printf("\n ¿Cantidad de mujeres?: ");
        scanf("%i", &hombres);
    }while (hombres < 0);
    porcentajeDeHombres = ((double) hombres * 100 / (hombres + mujeres)) ;
    printf("\n Porcentaje de hombres %.2lf%%.", porcentajeDeHombres);
    printf("\n Porcentaje de mujeres %.2lf%%. \n\n", 100 - porcentajeDeHombres);

    system("pause");
    return 0;
}
