/*
 ==============================================================================================
 ==========================================Trabajo Practico 1==================================
 ====================================Vanina Patricia Zorrilla Barrios==========================

    Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
        1. Ingresar 1er operando (A=x)
        2. Ingresar 2do operando (B=y)
        3. Calcular todas las operaciones
            a) Calcular la suma (A+B)
            b) Calcular la resta (A-B)
            c) Calcular la division (A/B)
            d) Calcular la multiplicacion (A*B)
            e) Calcular el factorial (A!)
        4. Informar resultados
            a) “El resultado de A+B es: r”
            b) “El resultado de A-B es: r”
            c) “El resultado de A/B es: r” o “No es posible dividir por cero”
            d) “El resultado de A*B es: r”
            e) “El factorial de A es: r1 y El factorial de B es: r2”
        5. Salir
            • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
            que contenga las funciones para realizar las cinco operaciones.
            • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
            (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
            • Deberán contemplarse los casos de error (división por cero, etc)
            • Documentar todas las funciones
 ============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "zorrilla1.h"


int main()
{
    int opcion;
    int menu;
    char seguir;
    float operandoA;
    float operandoB;
    int flagNum1=0;
    int flagNum2= 0;
    int flagCalculos=0;
    float imprimir;
    seguir= 's';

    menu= menues(flagNum1, flagNum2, operandoA, operandoB);
    printf(menu);



    do{

        printf("Ingrese opcion\n ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                operandoA=IngresoUno();
                flagNum1=1;
                printf("Importante..!!Ingrese opcion 2 para seguir operando\n\n");
                break;

            case 2:
                if(flagNum1 == 1){
                    operandoB=IngresoDos();
                    flagNum2=1;
                    printf("Importante..!!Ingrese opcion 3 para seguir operando\n\n");
                    }
                else {
                    printf("\nDeberias haber ingresado el primer operando\n\n");
                }
                break;
            case 3:
                if(flagNum1 ==1 && flagNum2 ==1){
                    printf("************************************************************\n");
                    printf("\nHaciendo todas las operaciones!\n\n");
                    printf("************************************************************\n");
                    flagCalculos=1;
                    printf("Importante..!! ingresa la opcion 4 para seguir operando\n\n");
                }
                else{
                    printf("\nImposible hacer los calculos ya que falta ingresar operandos!\n");}
            break;

            case 4:
                if(flagCalculos==1){
                    imprimir= imprimeResultado(operandoA, operandoB);
                }
                else{
                    printf("No ha seleccionado la opcion para hacer los calculos");}
                break;
            case 5:
                printf("\nGracias por usar el programa! Hasta luego!\n");
                seguir='t';
                break;

            default:
                printf("\nElija una opcion valida\n");
                system("pause");
        }


    }while(opcion!= 5);

}
