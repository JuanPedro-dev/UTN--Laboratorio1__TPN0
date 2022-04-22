#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    /** 1.Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara
        si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario. */
    float nota1;
    float nota2;
    float nota3;
    float promedio;

    printf("Ingrese 1º nota: \n");
    fflush(stdin); // limpiar el buffer para evitar errores.
    scanf("%f", &nota1);
    printf("Ingrese 2º nota: \n");
    fflush(stdin); // limpiar el buffer para evitar errores.
    scanf("%f", &nota2);
    printf("Ingrese 3º nota: \n");
    fflush(stdin); // limpiar el buffer para evitar errores.
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if(promedio >= 7)
    {
        printf("Felicidades ud aprobo!!! Promedio: %.2f \n\n", promedio);
    } else
    {
        printf("Lo siento, ud desaprobo, promedio: %.2f \n\n", promedio);
    }

    system("pause");
    return 0;
}
