#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, divisores[100], cont = 0, soma = 0;
    printf("Digite um Numero: ");
    scanf("%d", &numero);
    for(i=1; i<(numero); i++)
    {
        if(numero%i == 0)
        {
            soma = soma + i;
            cont++;
        }
    }
    if(soma == numero)
        printf("Perfeito!\n");
    else
        printf("Nao Perfeito!\n");

    system("pause");
    return 0;
}

