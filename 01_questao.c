#include <stdio.h>

void inverterNum(int v[], int n)
{
    int i;
    for (i = n-1; i > 0; i--)
    {
        printf("%d", v[i]);
    }
}

int main()
{

    int i, n = 5;
    int vet[n];
    for (i = 0; i < n; i++)
    {
        vet[i] = i + 1;
    }

    inverterNum(vet[n], n);

    return 0;
}
