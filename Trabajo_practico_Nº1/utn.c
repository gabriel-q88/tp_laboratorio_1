#include <stdio_ext.h>
#include <stdlib.h>
/**
*\brief Pide al usuario un numero y muestra el numero.
*\param mensaje Es el mensaje que se quiere mostrar
*\return retorno Devuelve el numero ingresado por el usuario
*/
int pedirUnNumero(char* mensaje)
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    return numero;
}

/**
*\brief Realiza la suma de dos numeros y devuelve un resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\param resultado muestra el resultado.
*\return Devuelve el resultado de la suma.
*/
int sumarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno + numeroDos;
    printf("El resultado de la suma es %d",resultado);
    return resultado;
}

/**
*\brief Realiza la resta de dos numeros y devuelve un resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\param resultado muestra el resultado.
*\return Devuelve el resultado de la resta.
*/
int restarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno - numeroDos;
    printf("El resultado de la resta es %d",resultado);
    return resultado;
}

/**
*\brief Realiza el calculo de division de dos numeros y devuelve un resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return Devuelve el resultado de la division.
*/
int dividirDosNumeros(int numeroUno,int numeroDos)
{
    int cociente;
    int resto;
    if ( numeroUno == 0 && numeroDos == 0)
    {
        printf("Error, no es posible dividir por 0 ");
    }
    else if(numeroUno < numeroDos)
    {
        printf("Error, el dividendo debe ser mayor");
    }
    else
    {
        cociente = numeroUno / numeroDos;
        resto = numeroUno % numeroDos;
        printf("El resultado de la division es %d y el resto es %d",cociente,resto);
    }
    return cociente;
}

/**
*\brief Realiza la multiplicacion de dos numeros y devuelve un resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\param resultado muestra el resultado.
*\return Devuelve el resultado de la multiplicacion.
*/
int multiplicarDosNumeros(int numeroUno, int numeroDos,int resultado)
{
    resultado = numeroUno * numeroDos;
    printf("El resultado de la multiplicacion es %d",resultado);
    return resultado;
}

/**
*\brief Realiza el calculo factorial de un numero y devuelve un resultado.
*\param numeroIngresado Es el numero ingresado por el usuario
*\return retorno Devuelve el resultado del calculo factorial
*/
float factorial(int numeroIngresado)
{
    int resultado;
    if(numeroIngresado == 1)
    {
        return 1;
    }
    resultado = numeroIngresado * factorial(numeroIngresado-1);
    return (resultado);
}
