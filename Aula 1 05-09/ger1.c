#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;
    printf("Digite um Numero: ");
    scanf("%d", &numero);
    for(i=2; i<(numero/2); i++)
    {
        if(numero%i == 0)
        {
            printf("Nao primo!\n");
            break;
        }
    }
    printf("Primo!\n");
    system("pause");
    return 0;
}
