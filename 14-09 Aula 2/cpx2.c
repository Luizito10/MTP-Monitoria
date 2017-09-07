#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

int main ()
{
    double complex z,zc, Prodconjugado;
    double preal, pimag;
    printf("Informe a parte real de Z \n");
    scanf("%lf",&preal);
    printf("Informe a parte imaginaria de Z \n");
    scanf("%lf",&pimag);
    z = preal + pimag * I;
    zc = preal - (pimag * I);

    Prodconjugado = z * zc;
    printf("Produto: %lf * %lfi\n",creal(Prodconjugado),cimag(Prodconjugado));

    return 0;

}
