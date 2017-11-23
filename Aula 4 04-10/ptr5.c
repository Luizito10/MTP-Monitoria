#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX
#define N 1000

int main()
{
    srand(time(0));
    int vetor[N];
    int i;
    for(i=0; i<N ;i++)
    {
        vetor[i] = rand() % 1000;
        printf("%d ", vetor[i]);
    }
}
