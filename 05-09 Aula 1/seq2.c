#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;
    printf("Digite o valor da Base: ");
    scanf("%f", &base);
    printf("Digite o valor da Altura: ");
    scanf("%f", &altura);
    area = (base * altura);
    printf("Area: %.2f \n" , area);

    system("pause");
    return 0;
}
