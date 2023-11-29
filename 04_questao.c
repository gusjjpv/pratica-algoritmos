#include <stdio.h>

/*
Escreva uma funcao que receba dois numeros positivos por parametro e retorne a soma dos N numeros
inteiros existentes entre eles.
*/

int somaIntervalo(int a, int b)
{
    int i, soma = 0;

    for (i = a + 1; i < b; i++)
    {
        soma = soma + i;
    }

    return soma;
}

int main()
{

    int num1, num2, soma;
    printf("informe os numeros: ");
    scanf("%d %d", &num1, &num2);
    soma = somaIntervalo(num1, num2);
    printf("%d", soma);
    return 0;
}