#include "./my.h/my.h"

int main(void)
{
    int a = 0;
    int b = 0;

    printf("Entrez les entiers : \n");
    scanf("%d", &a);
    scanf("%d", &b);

    my_pointer_swap(&a, &b);
    return 0;
}

void    my_pointer_swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}