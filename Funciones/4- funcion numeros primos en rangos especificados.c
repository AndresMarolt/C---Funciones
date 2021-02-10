// Utilizar la función del problema anterior para mostrar las cantidades de números primos que hay en los rangos:
// [1000-2000], [2000-3000] y [3000-4000]

#include <stdio.h>

int primos_en_rango(int numero1, int numero2);

int main()
{
    printf("\n\n En el rango [1000-2000] existen %d numeros primos.", primos_en_rango(1000, 2000));
    printf("\n En el rango [2000-3000] existen %d numeros primos.", primos_en_rango(2000, 3000));
    printf("\n En el rango [3000-4000] existen %d numeros primos.", primos_en_rango(3000, 4000));
}

int primos_en_rango(numero1, numero2)
{
    int i, j, acum=0, cont=0;

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
