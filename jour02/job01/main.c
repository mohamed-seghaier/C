#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    my_mul(int a, int b)
{
        printf("%d\n", (a * b));
}

void    my_add(int a, int b)
{
        printf("%d\n", (a + b));
}

void    my_sub(int a, int b)
{
        printf("%d\n", (a - b));
}

void    my_div(int a, int b)
{
        printf("%d\n", (a / b));
}

void    my_mod(int a, int b)
{
        printf("%d\n", (a % b));
}


int main(void)
{
        int a = 10;
        int b = 2;
        
        printf("Multiplication : ");
        my_mul(a, b);
        printf("Addition : ");
        my_add(a, b);
        printf("Soustraction : ");
        my_sub(a, b);
        printf("Division : ");
        my_div(a, b);
        printf("Modulo : ");
        my_mod(a, b);

        return (0);
}
