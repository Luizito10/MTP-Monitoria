#include <stdio.h>
#include<math.h>

int main()
{
    float a,c,b,ang;
    printf("Digite os valores dos lados:\n");
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Digite o valor do angulo formado entre eles: (em radianos) \n");
    scanf("%f", &ang);
    a = sqrt(pow(b,2.)+pow(c,2.)-2*b*c*cos(ang));
    printf("O valor do lado a: \n %f", a);


    return 0;
}
