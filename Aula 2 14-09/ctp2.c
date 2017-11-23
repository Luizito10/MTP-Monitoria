#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char invest;
    int indice = 0;
    printf("Digite uma Frase: ");
    printf("\n");
    fflush(stdin);
    fgets(frase,256,stdin);
    invest = frase[indice];
    while(invest)
        {
            frase[indice] = toupper(invest);
            indice++;
            invest = frase[indice];
        }
    printf("%s", frase);

    return 0;
}
