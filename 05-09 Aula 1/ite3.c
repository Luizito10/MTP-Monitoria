#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[256];
    int i, contador=0;
    printf("Digite a Palavra: ");
    scanf("%s", palavra);
    for(i=0; i< 256;i++)
    {
        if(palavra[i] == NULL)
            break;
        else
            contador++;
    }
    printf("Temos %d letras\n", contador);

    system("pause");
    return 0;
}
