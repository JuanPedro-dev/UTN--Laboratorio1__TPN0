#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /** 3) Leer 10 n�meros e imprimir solamente los n�meros positivos */

    int number;

    printf("Imprime los positivos");

    for(int i = 1; i <= 10; i++){
        printf("\nIngrese el %d n�mero: ",i);
        scanf("%d", &number);

        if(number >= 0){
            printf("%d es positivo\n" , number);
        }
    }

    return 0;
    system("pause");
}
