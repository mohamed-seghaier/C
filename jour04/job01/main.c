#include "./my.h/my.h"

int main(void)
{
    int a = 0;
    char b = 'B';
    char c[12] = "Bonjour toi\n";

    printf("%p\n%p\n%p\n", &a, &b, &c);

    return 0;
}