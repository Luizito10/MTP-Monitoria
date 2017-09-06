#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial = 1, i=0;
    printf("Digite o numero para calculo do fatorial: ");
    scanf("%d", &num);
    for(i=num; i>0; i--)
    {
        fatorial = fatorial * i;
    }
    printf("Fatorial: %d\n", fatorial);

    system("pause");
    return 0;
}

