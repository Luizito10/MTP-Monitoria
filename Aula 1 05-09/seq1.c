#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, area;
    printf("Digite o valor do lado do Quadrado: ");
    scanf("%f", &x);
    area = x * x;
    printf("Area: %.2f \n" , area);

    system("pause");
    return 0;
}
