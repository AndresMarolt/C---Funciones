// Un programa que utiliza una función que calcula y retorna el valor de X^y (X elevado a la potencia Y)
// siendo X e Y enteros positivos, y por lo tanto dando un resultado también entero.

#include <stdio.h>

unsigned long long funcion_potencia(int, int);

int main()
{
    int x, y;
    printf("Ingrese un numero entero positivo: ");
    scanf("%u", &x);
    printf("Ingrese la potencia: ");
    scanf("%u", &y);
    printf("%lu elevado a la potencia %lu es igual a %lu", x, y, funcion_potencia(x, y));
}

unsigned long long funcion_potencia(int base, int potencia)
{
    unsigned long long resultado=1;
    int i;
    for(i=1; i<=potencia; i++){
        resultado = base*resultado;
    }
    return resultado;
}
