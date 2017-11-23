#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float notas[5], media;
    printf("Digite o valor da Notas obtidas: (Entre 0 e 10) \n");
    while(i<5)
    {
        printf("Nota %d: ", (i+1));
        scanf("%f", &notas[i]);
        if(notas[i] < 0 || notas[i] > 10)
        {
            printf("Você digitou um valor invalido!");
            break;
        }
        i++;
    }
    media = ((notas[0]*2)+(notas[1]*2)+(notas[2]*2)+(notas[3]*3)+(notas[4]*5))/14;
    printf("Media: %.2f \n" , media);

    system("pause");
    return 0;
}
