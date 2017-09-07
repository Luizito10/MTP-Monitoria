#include <stdio.h>
#include<math.h>

int main()
{
    float num, base, x;
    printf("Digite o numero e a base para calculo do logaritmo: \n");
    scanf("%f", &num);
    scanf("%f", &base);
    x = log(num)/log(base);
    printf("O valor e esse: %f", x);


    return 0;
}
