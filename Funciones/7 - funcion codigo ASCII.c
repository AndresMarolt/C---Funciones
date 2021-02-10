// Construir una funcion que lea un caracter de teclado y lo escriba en pantalla
// colocando el caracter cuyo codigo ASCII es el siguiente al recibido.

#include <stdio.h>

unsigned char ascii(unsigned char);

void main()
{
    unsigned char A;
    printf("Ingrese un caracter: ");
    A = getchar();
    ascii(A);
}

unsigned char ascii(unsigned char letra)
{
    printf("%c = %d -----> %d + 1 = %d = %c", letra, letra, letra, letra+1, letra+1);
}


