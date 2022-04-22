#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
        /** 5) Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
        Realizar un algoritmo para calcular la calificación promedio y la
        calificación más baja de todo el grupo. */

    float nota, acumulador, minimo;
    do
    {
        system("cls");
        printf("                  Cálculo de la nota mas baja, y el promedio de 40 alumnos.\n\n\n");
        printf("Ingrese la nota del alumno 1: \n");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    minimo = nota;
    acumulador += nota;
    for(int i = 2; i <= 40; i++)
    {
        do
        {
            printf("\nIngrese la nota del alumno %i: ", i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        if (minimo>nota){
            minimo = nota;
        }
        acumulador += nota;
    }
    acumulador /= 40;
    printf("\nEl promedio de los 40 alumnos es: %.2f. \n\n", acumulador);
    printf("\nEl mínimo de los 40 alumnos es: %.2f. \n\n", minimo);



    system("pause");
    return 0;
}
