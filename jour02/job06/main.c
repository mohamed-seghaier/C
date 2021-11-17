#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
    int i = 0;

    int *tab = malloc(sizeof(int) * 9);



    for (int nb = 49; nb < 58; i += 1, nb += 1) tab[i] = nb;

    char *str = malloc(sizeof(char) * 9);

    for (i = 0; tab[i]; i += 1)
        str[i] = tab[i];

    puts(str);

    return (0);
}