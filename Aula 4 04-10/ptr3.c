#include <stdio.h>

int main ()
{
    int vet[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    int tam = sizeof(vet)/sizeof(int);
    int contagem = 0;
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vet;
    for(;ponteiro < vet + tam;ponteiro++)
    {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro != 0x0)
            contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 1's.\n", contagem);
    return 0;
}
