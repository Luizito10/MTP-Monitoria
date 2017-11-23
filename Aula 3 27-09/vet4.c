#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int x, vet[1000], a, b = -1, c=10;
    int i, j, k;
    printf("Digite um numero entre 1 e 1000: ");
    scanf("%d", &x);
    for (i=0; i<x; i++)
    {
        a=rand()%9+1;
        vet[i] = a;
    }
    for (j=0; j<x; j++)
    {
        if(vet[j] > b)
            b = vet[j];
    }
    for (k=0; k<x; k++)
    {
        if(vet[k] < c)
            c = vet[k];
    }
    printf("Maximo = %d\n", b);
    printf("Minimo = %d\n", c);
    return 0;
}
