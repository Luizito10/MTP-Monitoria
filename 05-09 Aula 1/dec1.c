#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite o Numero escolhido: ");
    scanf("%d", &x);
    if((x%2) == 0)
        printf("O Numero e par!\n");
    else
        printf("O Numero e impar!\n");
    if((x%3) == 0)
        printf("O Numero e mult. de 3!\n");
    if((x%5) == 0)
        printf("O Numero e mult. de 5!\n");
    if((x%7) == 0)
        printf("O Numero e mult. de 7!\n");

    system("pause");
    return 0;
}

