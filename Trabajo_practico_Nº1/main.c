#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int pedirUnNumero(char* mensaje);
int sumarDosNumeros(int numeroUno, int numeroDos);
int restarDosNumeros(int numeroUno, int numeroDos);
int dividirDosNumeros(int dividendo,int divisor);
int multiplicarDosNumeros(int numeroUno, int numeroDos);
int factorial(int numeroIngresado);


int main()
{
    int operandoUno;
    int operandoDos;
    char teclaSeguir;
    int operacion;
    int resultado;

    printf("*CALCULADORA - UTN*\n");
    operandoUno = pedirUnNumero("Ingrese Primer Operando: ");
    operandoDos = pedirUnNumero("Ingrese Segundo Operando: ");
    teclaSeguir = '1';
    while(teclaSeguir!='0')
    {
        printf("\nIngrese una Opcion para Ejecutar: \n \n");
        printf("1. Sumar Operandos: %d + %d\n",operandoUno,operandoDos);
        printf("2. Restar Operandos:%d - %d \n",operandoUno,operandoDos);
        printf("3. Dividir los Operandos: %d / %d \n",operandoUno,operandoDos );
        printf("4. Multiplicar los Operandos: %d * %d\n",operandoUno,operandoDos );
        printf("5. Factorial de los Operandos: %d y %d\n",operandoUno,operandoDos);
        scanf("%d", &operacion);
        if(operacion <1 || operacion > 5)
        {
            printf("Error, Ingrese una Opcion del 1 al 5");
            teclaSeguir = '1';
        }
        else
        {
            teclaSeguir = '0';
        }

    }
    switch(operacion)
    {
    case 1:
        sumarDosNumeros(operandoUno,operandoDos);
        break;
    case 2:
        restarDosNumeros(operandoUno,operandoDos);
        break;
    case 3:
        dividirDosNumeros(operandoUno,operandoDos);
        break;
    case 4:
        multiplicarDosNumeros(operandoUno, operandoDos);
        break;
    case 5:
        resultado = factorial(operandoUno);
        printf("El factorial de %d es %d ",operandoUno,resultado);
        resultado = factorial(operandoDos);
        printf("y el factorial de %d es %d",operandoDos,resultado);
        break;
    }
}
