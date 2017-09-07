#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    char inv;
    int i=0, cont = 0;
    printf("Digite uma frase: \n");
    fflush;
    fgets(str,256,stdin);
    inv = str[i];
    while(inv)
    {
        if(isalpha(inv)!=0)
            cont++;

        i++;
        inv = str[i];
    }
    printf("%d", cont);
    return 0;
}
