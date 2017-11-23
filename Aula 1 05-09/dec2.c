#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int x, randNumber, soma;
    randNumber = rand() % 9;
    printf("Digite o Numero escolhido: ");
    scanf("%d", &x);
    soma = x + randNumber;
    if((soma%2) == 0)
        printf("O Numero e par!\n");
    else
        printf("O Numero e impar!\n");
    //printf("%d", randNumber);

    system("pause");
    return 0;
}
