#include "./my.h/my.h"

int main(void)
{
    char *str = malloc(sizeof(char) * strlen("SALUT GARCON"));

    str = "SALUT GARCON";

    printf("%d", my_pointer_count(str));
    return 0;
}

int my_pointer_count(char *str)
{
    char *a = str;
    int cnt = 0;

    while (*a) {
        if (*a == 'a' || *a == 'A') cnt += 1;
        *(a)++;
    }
    return (cnt);
}