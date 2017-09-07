#include <stdio.h>
#include<math.h>

int main()
{
    float x,y,a,b,d,xa,yb;
    printf("Digite as coodernadas (x,y) do ponto A: ");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Digite as coodernadas (x,y) do ponto B: ");
    scanf("%f", &a);
    scanf("%f", &b);

    pow(xa,2);
    pow(yb,2);
    d=sqrt(pow(a-x,2.)+pow(y-b,2.));
    printf("A distancia e: %f", d);

    return 0;
}
