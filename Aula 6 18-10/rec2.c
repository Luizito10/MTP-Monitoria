#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 836
void troca(char * str)
{
    if(*str)
    {
        troca(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char a[N];
    printf ("Entre com uma frase: ");
    fgets(a,N,stdin);
    a[strlen(a)-1]='\0';
    printf("Frase invertida: ");
    troca(a);
    printf("\n");
    return EXIT_SUCCESS;
}