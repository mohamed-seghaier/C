#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int my_mul(int a, int b)
{
        return (a * b);
}

int my_add(int a, int b)
{
        return (a + b);
}

int my_sub(int a, int b)
{
        return (a - b);
}

int my_div(int a, int b)
{
        return (a / b);
}

int my_mod(int a, int b)
{
        return (a % b);
}

int main(void)
{
        int a = 10;
        int b = 2;
        
        printf("Mul : %d\n", my_mul(a, b));
        printf("Add : %d\n", my_add(a, b));
        printf("Sub : %d\n", my_sub(a, b));
        printf("Div : %d\n", my_div(a, b));
        printf("Mod : %d\n", my_mod(a, b));
        return 0;
}
