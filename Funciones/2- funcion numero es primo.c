// Construir una función que reciba un entero positivo y retorne 1 si este es primo y 0 en caso contrario.

#include <stdio.h>

int es_primo(int numero);

int main()
{
    int num;
    printf("Ingrese un numero entero para saber si es primo: ");
    scanf("%d", &num);
    if(es_primo(num))
        printf("%d es un numero primo", num);
    else
        printf("%d no es un numero primo", num);
}

int es_primo(numero)
{
    int i, cont=0;
    for(i=2;i<numero;i++){
        if(numero%i==0)
            cont++;}
    if(cont==0)
        return 1;
    else
        return 0;
}

