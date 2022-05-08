#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    char option;
    float ganancia, capital; char repetir;       // ejercicio 1 (A)
    float total, descuento, conDescuento;        // ejercicio 2 (B)
    int hombres, mujeres; float porcentaje;      // ejercicio 3 (C)
    float nota1, nota2, nota3 , promedio = 0;    // ejercicio 4 (D)
 /**   float total, descuento, conDescuento;        // ejercicio 5 (E)  ya estan declaradas las variables...*/
    int horasTrabajadas, horasExtra, salario;    // ejercicio 6 (F)
    int numeroA, numeroB;                        // ejercicio 7 (G)
    system("color 2e");

    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
    Sleep(50);
    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
    Sleep(50);
    printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
    Sleep(50);
    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
    Sleep(50);
    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
    Sleep(50);
    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
    Sleep(50);
    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
    Sleep(50);
    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
    Sleep(50);
    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("//                                                                                                       //\n");
    Sleep(50);
    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(500);

    do
    {
        system("color 3f");
        system("cls");

        printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//                                     Lista de ejercicios TPN 0                                         //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//  Seleccione el ejercicio que desea ejecutar con la letra:                                             //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//  >> Problemas Secuenciales.                                                                           //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//       1): A     2): B     3): C                                                                       //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//  >> Problemas Condicionales Selectivos Simples.                                                       //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//       1): D     2): E     3): F     4): G     5): H                                                   //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//  >> Problemas Condicionales Selectivos Compuestos (si anidados o en cascada).                         //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//       1): I     2): J                                                                                 //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//  >> Problemas con repeticiones.                                                                       //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//       1): K     2): L     3): M     4): N     5): O     6): P                                         //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("//                                         Habilitados hasta el G                                        //\n");
        Sleep(50);
        printf("//                                                                                                       //\n");
        Sleep(50);
        printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        Sleep(200);
        printf("                              Tu entrada (Terminar Programa: s o S): ");
        scanf("%c", &option);


        switch (option)
        {
        case 'a':
        case 'A':
            system("color 1b");
            do{

                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                          Ejercicio 1 (A)                                              //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Suponga que un individuo desea invertir su capital en un banco y desea saber                    //\n");
                    Sleep(50);
                    printf("//       cuánto dinero ganará después de un mes si el banco paga a razón de 2%% mensual.                  //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Introduce el capital:                                                                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                               Monto: ");
                    scanf("%f", &capital);
                } while (capital < 0);

                    ganancia = capital * .02;

                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                        Ejercicio 1 (A) - Secuentcias.                                 //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Suponga que un individuo desea invertir su capital en un banco y desea saber                    //\n");
                    Sleep(50);
                    printf("//       cuánto dinero ganará después de un mes si el banco paga a razón de 2%% mensual.                  //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("           >>  Introduce el capital: %.2f                           ganancia: %.2f                          \n", capital, ganancia);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(500);
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    scanf("%c", &option);
                    scanf("%c", &option);
                    printf("\n\n");

            } while (option == 'r' || option == 'R');
            break;

        case 'b':
        case 'B':
    // ----------------------------------------------- Ejercicio 2 (B) -----------------------------------------------------------
            system("color ");
            do{
                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                   Ejercicio 2 (B) - Secuentcias.                                      //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    2) Una tienda ofrece un descuento del 15%% sobre el total de la compra y un cliente                 //\n");
                    Sleep(50);
                    printf("//       desea saber cuánto deberá pagar finalmente por su compra. l.                                    //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>    Monto inicial:                                                                             //\n");
                    Sleep(50);
                    printf("//      >> -  Descuento 15%%:                                                                             //\n");
                    Sleep(50);
                    printf("//      ----------------------------------------------                                                   //\n");
                    Sleep(50);
                    printf("//      >> Total:                                                                                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Monto Inicial: ");
                    scanf("%f", &total);

                } while (total < 0);

                    descuento = total * .15;
                    conDescuento = total * 0.85;

                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                   Ejercicio 2 (B) - Secuentcias.                                      //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    2) Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente              //\n");
                    Sleep(50);
                    printf("//       desea saber cuánto deberá pagar finalmente por su compra. l.                                    //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>    Monto inicial:             $ %.2f                                                           \n", total);
                    Sleep(50);
                    printf("//      >> -  Descuento 15%%:             $  %.2f                                                          \n", descuento);
                    Sleep(50);
                    printf("//      ----------------------------------------------                                                   //\n");
                    Sleep(50);
                    printf("//      >> Total:                        $ %.2f                                                              \n", conDescuento);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(500);
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    scanf("%c", &option);
                    scanf("%c", &option);
                    printf("\n\n");

            } while (option == 'r' || option == 'R');

            break;
        case 'c':
        case 'C':
    // ----------------------------------------------- Ejercicio 3 (C) -----------------------------------------------------------

            do{

                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                   Ejercicio 3 (C) - Secuentcias.                                      //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un maestro desea saber qué porcentaje de hombres y que porcentaje de                            //\n");
                    Sleep(50);
                    printf("//        mujeres hay en un grupo de estudiantes.                                                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Hombres:                        >> %% Hombres:                                                //\n");
                    Sleep(50);
                    printf("//      >>  Mujeres:                        >> %% Mujeres:                                                //\n");
                    Sleep(50);
                    printf("//      ----------------------------------------------                                                   //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Hombres:  ");
                    scanf("%d", &hombres);

                } while (hombres < 0);


                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                   Ejercicio 3 (C) - Secuentcias.                                      //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un maestro desea saber qué porcentaje de hombres y que porcentaje de                            //\n");
                    Sleep(50);
                    printf("//        mujeres hay en un grupo de estudiantes.                                                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Hombres: %d                     >> %% Hombres: 100%%                                        \n", hombres);
                    Sleep(50);
                    printf("//      >>  Mujeres:                        >> %% Mujeres:                                               //\n");
                    Sleep(50);
                    printf("//      ----------------------------------------------                                                   //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Mujeres:  ");
                    scanf("%d", &mujeres);

                } while (mujeres < 0);

                    porcentaje = ((float) hombres * 100) / (hombres + mujeres);
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                   Ejercicio 3 (C) - Secuentcias.                                      //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un maestro desea saber qué porcentaje de hombres y que porcentaje de                            //\n");
                    Sleep(50);
                    printf("//        mujeres hay en un grupo de estudiantes.                                                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Hombres: %d                     >> %% Hombres: %.2f                                 \n", hombres, porcentaje);
                    Sleep(50);
                    printf("//      >>  Mujeres: %d                     >> %% Mujeres: %.2f                                 \n", mujeres, 100 - porcentaje);
                    Sleep(50);
                    printf("//      ----------------------------------------------                                                   //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    scanf("%c", &option);
                    scanf("%c", &option);
                    printf("\n\n");

            } while (option == 'r' || option == 'R');
          break;
        case 'd':
        case 'D':
    // ----------------------------------------------- Ejercicio 4 (D) -----------------------------------------------------------


            do
            {
                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 4 (D) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara  si su               //\n");
                    Sleep(50);
                    printf("//       promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.               //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Nota 1: %2.2f              >>  Nota 2: %2.2f               >>  Nota 3: %2.2f                    //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Promedio:                         >> Estado:                                                  //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Nota 1:  ");
                    scanf("%f", &nota1);

                } while (nota1 < 0 || nota1 > 10);

                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 4 (D) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara  si su               //\n");
                    Sleep(50);
                    printf("//       promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.               //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Nota 1: %2.2f              >>  Nota 2: %2.2f               >>  Nota 3: %2.2f                    //\n", nota1);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Promedio:                         >> Estado:                                                  //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Nota 2:  ");
                    scanf("%f", &nota2);

                } while (nota2 < 0 || nota2 > 10);
                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 4 (D) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara  si su               //\n");
                    Sleep(50);
                    printf("//       promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.               //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Nota 1: %2.2f              >>  Nota 2: %2.2f               >>  Nota 3: %2.2f          \n", nota1, nota2);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Promedio:                         >> Estado:                                                  //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                              Nota 3:  ");
                    scanf("%f", &nota3);

                } while (nota3 < 0 || nota3 > 10);
                promedio = (nota1 + nota2 + nota3) / 3 ;
                if (promedio >= 7)
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 4 (D) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara  si su               //\n");
                    Sleep(50);
                    printf("//       promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.               //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Nota 1: %2.2f              >>  Nota 2: %2.2f               >>  Nota 3: %2.2f          \n", nota1, nota2, nota3);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Promedio: %.2f                       >> Estado: felicidades!!! Aprobaste.                      \n", promedio);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    scanf("%c", &option);
                    scanf("%c", &option);
                    printf("\n\n");
                } else
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 4 (D) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    1) Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara  si su               //\n");
                    Sleep(50);
                    printf("//       promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.               //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >>  Nota 1: %2.2f              >>  Nota 2: %2.2f               >>  Nota 3: %2.2f          \n", nota1, nota2, nota3);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Promedio: %.2f                       >> Estado: Desaprobaste, sigue intentando.        \n", promedio);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    scanf("%c", &option);
                    scanf("%c", &option);
                    printf("\n\n");

                } // fin else
        } while (option == 'r' || option == 'R'); // fin repetir
        break;

        case 'e':
        case 'E':
            // ----------------------------------------------- Ejercicio 5 (E) -----------------------------------------------------------
            do
            {

                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 5 (E) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    2) En un almacén se hace un 20%% de descuento a los clientes cuya compra supere                      //\n");
                    Sleep(50);
                    printf("//       los $5000 ¿Cuál será la cantidad que pagara una persona por su compra?                          //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Total compra:    $ %.2f              >>  ¿Aplica Descuento?:                                  //\n");
                    Sleep(50);
                    printf("//      >> Descuento:       $ %.2f                                                                       //\n");
                    Sleep(50);
                    printf("//      -----------------------------------                                                              //\n");
                    Sleep(50);
                    printf("//      >> Total:           $ %.2f                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                          Total de la compra:  ");
                    scanf("%f", &total);

                } while (total < 0);

                descuento = total * .2;
                conDescuento = total * .8;

                if (total >= 5000)
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 5 (E) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    2) En un almacén se hace un 20%% de descuento a los clientes cuya compra supere                      //\n");
                    Sleep(50);
                    printf("//       los $5000 ¿Cuál será la cantidad que pagara una persona por su compra?                          //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Total compra:    $ %.2f              >>  ¿Aplica Descuento?: SI                               \n", total);
                    Sleep(50);
                    printf("//      >> Descuento:       $ %.2f                                                                       \n", descuento);
                    Sleep(50);
                    printf("//      -----------------------------------                                                              //\n");
                    Sleep(50);
                    printf("//      >> Total:           $ %.2f                                                                       \n", conDescuento);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");
                } else
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 5 (E) - Condicionales Selectivos Simples .                        //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    2) En un almacén se hace un 20%% de descuento a los clientes cuya compra supere                      //\n");
                    Sleep(50);
                    printf("//       los $5000 ¿Cuál será la cantidad que pagara una persona por su compra?                          //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      >> Total compra:    $ %.2f              >>  ¿Aplica Descuento?: NO                               \n", total);
                    Sleep(50);
                    printf("//      >> Descuento:       $ 0                                                                          //\n");
                    Sleep(50);
                    printf("//      -----------------------------------                                                              //\n");
                    Sleep(50);
                    printf("//      >> Total:           $ %.2f                                                                       \n", total);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");
                } // fin else
            } while (option == 'r' || option == 'R'); // fin repetir
            break;
        case 'f':
        case 'F':
            // ----------------------------------------------- Ejercicio 6 (F) -----------------------------------------------------------

             do
            {

                do
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 6 (F) - Condicionales Selectivos Simples.                         //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:           //\n");
                    Sleep(50);
                    printf("//      Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas                  //\n");
                    Sleep(50);
                    printf("//      se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.                //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 300            >>  Horas normales:     $ %.2f                           //\n");
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 400            >>  Horas Extra:        $ %.2f                           //\n");
                    Sleep(50);
                    printf("//       >> Horas trabajadas:  0             -------------------------------------------                 //\n");
                    Sleep(50);
                    printf("//                                               >> Total:              $ %.2f                           //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("                                      Horas totales trabajadas: ");
                    fflush(stdin);
                    scanf("%i", &horasTrabajadas);

                } while (horasTrabajadas < 0);



                if (horasTrabajadas <= 40)
                {
                    salario = horasTrabajadas * 300;

                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 6 (F) - Condicionales Selectivos Simples.                         //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:           //\n");
                    Sleep(50);
                    printf("//      Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas                  //\n");
                    Sleep(50);
                    printf("//      se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.                //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 300            >>  Horas normales:     $ %d                           \n", salario);
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 400            >>  Horas Extra:        $ %d                           //\n");
                    Sleep(50);
                    printf("//       >> Horas trabajadas:  %d             -------------------------------------------                \n", horasTrabajadas);
                    Sleep(50);
                    printf("//                                               >> Total:              $ %d                           \n",salario);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");


                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");
                } else
                {
                    salario = 12000 + (horasTrabajadas - 40 ) * 400;
                    horasExtra = (horasTrabajadas - 40) * 400;

                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                           Ejercicio 6 (F) - Condicionales Selectivos Simples.                         //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    3) Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:           //\n");
                    Sleep(50);
                    printf("//      Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas                  //\n");
                    Sleep(50);
                    printf("//      se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.                //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 300            >>  Horas normales:     $ 12.000                         //\n");
                    Sleep(50);
                    printf("//       >> Valor hora normal: $ 400            >>  Horas Extra:        $ %i                            \n",horasExtra);
                    Sleep(50);
                    printf("//       >> Horas trabajadas:  0             -------------------------------------------                 //\n", horasTrabajadas);
                    Sleep(50);
                    printf("//                                               >> Total:              $ %i                            \n", salario);
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   ///     //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");

                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");
                } // fin else
            } while (option == 'r' || option == 'R'); // fin repetir
            break;
        case 'g':
        case 'G':
            // ----------------------------------------------- Ejercicio 7 (G) -----------------------------------------------------------

            do{
                system("cls");
                printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                          Ejercicio 7 (G)                                              //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//    4) Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente                   //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                 >>  Número A:                                  >>  Número B:                          //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                Sleep(50);
                printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                printf("                                               Número A: ");
                fflush(stdin);
                scanf("%d", &numeroA);

                system("cls");
                printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                          Ejercicio 7 (G)                                              //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//    4) Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente                   //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                >>  Número A: %d                             >>  Número B:                           \n", numeroA );
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                Sleep(50);
                printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                Sleep(50);
                printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                Sleep(50);
                printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                Sleep(50);
                printf("//                                                                                                       //\n");
                Sleep(50);
                printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                printf("                                               Número B: ");
                fflush(stdin);
                scanf("%d", &numeroB);

                if (numeroA <= numeroB)
                {
                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                          Ejercicio 7 (G)                                              //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    4) Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente                   //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                >>  Número A: %d                             >>  Número B: %d                           \n", numeroA, numeroB );
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("   Ordenados: ");
                    for(numeroA; numeroA <= numeroB; numeroA++)
                    {
                        printf(" %d,", numeroA);
                    }

                    printf("\n//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(500);
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");

                } else {


                    system("cls");
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                          Ejercicio 7 (G)                                              //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//    4) Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente                   //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                >>  Número A: %d                             >>  Número B: %d                           \n", numeroA, numeroB );
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("   Ordenados: ");
                    for(numeroB; numeroB <= numeroA; numeroB++)
                    {
                        printf(" %d,", numeroB);
                    }

                    printf("\n//                                                                                                       //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("//      /////////  //      //    //////////   //      //         //      //   //////////  //      //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   // /    //         //      //       //      ///     //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //  /   //         //      //       //      // /    //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //   /  //         //      //       //      //  /   //     //\n");
                    Sleep(50);
                    printf("//             //  //      //    //      //   //    / //         //      //       //      //   /  //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //////////   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //    / //         //      //       //      //    / //     //\n");
                    Sleep(50);
                    printf("//     //      //  //      //    //      //   //     ///         //      //       //      //     ///     //\n");
                    Sleep(50);
                    printf("//     //////////  //////////    //      //   //      //         //////////       //      //      //     //\n");
                    Sleep(50);
                    printf("//                                                                                                       //\n");
                    Sleep(50);
                    printf("///////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
                    Sleep(500);
                    printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                    fflush(stdin);
                    scanf("%c", &option);
                    printf("\n\n");

                }

            } while (option == 'r' || option == 'R');
            break;


        case 's':
        case 'S':
            break;
        default:
            system("cls");
            do
            {
                printf("\n >> Hechos hasta el 7 (G), no voy a dedicarle tiempo a terminar ya que la finalidad era mostrar un menú.");
                printf("\n >> Pueden ver la resolución del resto individualmente en el github, \n");
                printf("      simplemente no serán agregado al menú interactivo. \n\n");
                printf("   Inicio = Any key         Repetir: r o R        Terminar / salir = s o S         Tu entrada: ");
                fflush(stdin);
                scanf("%c", &option);
                printf("\n\n");
            } while (option == 'r' || option == 'R');
            break;
   // ----------------------------------------------- default -----------------------------------------------------------
        } // End swith

    fflush(stdin);
    } while(option != 's' && option != 'S'); // Fin repetir programa
    printf("\n'No te preocupes si no funciona bien. Si todo estuviera correcto, serías despedido de tu trabajo'\n -- Ley de Mosher de la Ingeniería del Software.\n\n");
    system("pause");
    return 0;
} // Fin main


