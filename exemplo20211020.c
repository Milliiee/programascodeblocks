#include <stdio.h>

int main()
{
    int fn, sn, maior, resultado;
    printf("Introduza dois numeros: \n"); //espaço/enter para introduzir o segundo numero
    scanf("%d %d",&fn, &sn);

    if (fn>sn)
        maior = fn;
    else
        maior =sn;

    printf("O maior numero e: %d\n", maior);
    resultado = fn + sn;
    printf("A soma e: %d\n", resultado);
}
