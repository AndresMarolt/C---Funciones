// Utilizar la función del problema anterior para construir otra función que reciba dos enteros positivos
// y retorne la cantidad de números primos que se encuentran en el rango determinado por ellos.

#include <stdio.h>

int es_primo(int numero1, int numero2);

int main()
{
    int num1, num2;
    printf("Ingrese dos numeros enteros positivos para conocer la cantidad de numeros primos que existen entre ellos: ");
    scanf("%d %d", &num1, &num2);
    printf("\n\n En el rango delimitado entre %d y %d existen %d numeros primos", num1, num2, primos_en_rango(num1, num2));
}

int primos_en_rango(numero1, numero2)
{
    int i, j, acum=0, cont=0;

    if(numero1==0 | numero1==1)
        numero1=2;

    for(i=numero1;i<=numero2;i++)
    {
        for(j=2;j<i;j++)
            {
            if(i%j==0)
                cont++;
            }
        if (cont==0)
            acum++;
        cont=0;
    }
    return acum;
}
