#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main() {
    int i;
    char str[N]; char msg[2*N];
    printf("Entre com uma frase: ");
    fgets(str,N,stdin);
