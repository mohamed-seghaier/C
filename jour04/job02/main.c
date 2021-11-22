#include "./my.h/my.h"

int main(void)
{
    int a = 2;
    int b  = 10;

    my_pointer_add(&a, &b);
    return 0;
}

void my_pointer_add(int *a, int *b)
{
    int c = *a + *b;

    printf("%d\n", c);
}