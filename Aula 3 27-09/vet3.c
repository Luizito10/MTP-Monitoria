#include <stdio.h>

int main()
{
    int vet[10], i, j, k, soma = 0, produto = 1;
    printf("Digite 10 numeros :\n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (j=0; j<10; j++)
    {
        soma =  vet[j];
    }
    for (k=0; k<10; k++)
    {
        produto *=  vet[k];
    }
    printf("A soma e: %d", soma);
    printf("O produto e: %d", produto);
}
