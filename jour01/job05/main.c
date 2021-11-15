#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
        unsigned long long a = 520000;
        unsigned long long b = 100000;

        printf("Division : %d", (a / b));
        if (a%b)
                printf(",%d", a%b);
        printf("\n");
        printf("Addition : %llu\n", (a + b));
        printf("Soustraction : %llu\n", (a - b));
        printf("Multiplication : %llu\n", (a * b));

        return (0);
}
        
