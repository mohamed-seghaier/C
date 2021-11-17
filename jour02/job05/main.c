#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int *char_to_ascii(char *str)
{
    int *dest = malloc(sizeof(int) * strlen(str));

    int i = 0;
    for (i = 0; str[i]; i += 1) {
        dest[i] = str[i];
    }
    return dest;
}

int main(void)
{
    char *str = "123456789";
    int *tab = char_to_ascii(str);

    printf("%d\n", tab[1]);

    return (0);
}