#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, expoente, potencia , i;
    printf("Digite o numero da Base: ");
    scanf("%d", &base);
    printf("Digite o numero do Expoente: ");
    scanf("%d", &expoente);
    potencia = base * base;
    for(i=0; i<(expoente-2); i++)
    {
        potencia =  potencia * base;
    }
    printf("Potencia: %d\n", potencia);

    system("pause");
    return 0;
}
