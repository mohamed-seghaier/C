#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
        int a;
        int b;
        
        puts("Premier nombre :");
        scanf("%d", &a);
        puts("Deuxième nombre :");
        scanf("%d", &b);
        printf("Division : %d\n", (a / b));
        printf("Addition : %d\n", (a + b));
        printf("Soustraction : %d\n", (a - b));
        printf("Multiplication : %d\n", (a * b));

        return (0);
}
        
