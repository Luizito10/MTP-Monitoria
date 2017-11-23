#include <stdio.h>
#include <stdint.h>

int main ()
{
    unsigned int x = 0xFACA8421;
    unsigned char * pont;
    printf("%p : %u\n", &x, x);
    pont = (unsigned char *)&x;
    printf("%p : %X\n", pont, *pont);
    printf("%p : %X\n", pont+1, *(pont+1));
    printf("%p : %X\n", pont+2, *(pont+2));
    printf("%p : %X\n", pont+3, *(pont+3));
    return 0;
}
