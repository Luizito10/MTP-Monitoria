#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int vet[N], i, j=(N-1), aux, aux2;
    printf("Digite os numeros! \n");
    for(i=0;i<N;i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(i=0; i<N/2;i++)
    {
        aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
        j--;
    }
    for(i=0; i<N;i++)
    {
        if(i!=N-1)
            printf("%d, " , vet[i]);
        else
            printf("%d. " , vet[i]);
    }
    return EXIT_SUCCESS;
}
