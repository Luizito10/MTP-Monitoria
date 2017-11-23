#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX
#define N 1000

int main()
{
    int vetor[1000];
    int i;
    for(i=0; i<1000 ;i++)
    {
        vetor[i] = rand() % RAND_MAX;
        printf("%d", vetor[i]);
    }
}
