#include <stdio.h>
#include <stdlib.h>

int main()
{
    /** 1) Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1  */

    float nota;
    float promedio = 0;

    printf("Cálculo del promedio.");
    for(int i = 1; i <= 7; i++){
        do {
            system("cls");
            printf("Ingrese la %i nota: ",i);
            scanf("%f", &nota);
        } while (nota<0 || nota >10);

        promedio+=nota;
    }
    promedio/=7;
    printf("El promedio de las 7 notas es: %.2f ", promedio);
    return 0;
    system("pause");
}
