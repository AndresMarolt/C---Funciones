// Construir una funcion que reciba un entero positivo y retorne 1 si este es perfecto
// y 0 si no lo es. Utilizarla para mostrar los primeros 5 numeros perfectos.

#include <stdio.h>

int es_perfecto(int num);

main()
{
    int num;
    scanf("%d", &num);
    if(es_perfecto(num))
        printf("%d es un numero perfecto.", num);
    else printf("%d no es un numero perfecto.", num);
}

int es_perfecto(num)
{
    int i, acum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            acum = acum + i;
    }
    if(acum==num)
        return 1;
    else return 0;
}
