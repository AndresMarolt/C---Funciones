// Construir una funcion que reciba dos numeros enteros positivos
// y retorne un 1 si estos constituyen un par de numeros amigos,
// y 0 si no lo son. Utilizarla para mostrar algun par de numeros amigos.

#include <stdio.h>

unsigned int nros_amigos(unsigned int, unsigned int);

main()
{
    unsigned int x, y;
    printf("Ingrese dos numeros enteros positivos para saber si son numeros amigos: ");
    scanf("%u, %u", &x, &y);
    nros_amigos(x, y);
    if(nros_amigos(x, y))
        printf("Los numeros ingresados son numeros amigos.");
    else
        printf("Los numeros ingresados no son numeros amigos.");
}


unsigned int nros_amigos(unsigned int num1, unsigned int num2)
{
    int i, acum1=0, acum2=0;
    for(i=1; i<num1; i++)
    {
        if(num1%i==0)
            acum1 += i;
    }
    if (acum1==num2)
        return 1;
    else
        for(i=1; i<num2; i++)
        {
            if(num2%2==0)
                acum2 += i;
        }
        if (acum2==num1)
            return 1;
        else
            return 0;
}
