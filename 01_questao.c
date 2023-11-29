#include <stdio.h>
/*
Implemente uma função que receba como parametro um vetor de numeros inteiros(vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor.
*/

void inverter(int v[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", v[i]);
    }
}

int main()
{
    int n, i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++)
    {
        printf("Informe o %d° valor", i + 1);
        scanf("%d", &v[i]);
    }

    inverter(v, n);

    return 0;
}