#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int randNumber2, randNumber1, randNumber3, soma;
    randNumber1 = rand() %6;
    printf("Dado 1: %d\n", randNumber1);
    randNumber2 = rand() %6;
    printf("Dado 2: %d\n", randNumber2);
    randNumber3 = rand() %6;
    printf("Dado 3: %d\n", randNumber3);
    soma = randNumber1 + randNumber2 + randNumber3;
    if(soma == 7 || soma == 11)
        printf("Parabens, voce ganhou!!\n");
    else
        printf("Que pena, tente novamente!!\n");

    system("pause");
    return 0;
}
