#include "./my.h/my.h"

char c = '0';

void    add_inf(char *first, char *second) {
    int ret = 0;
    int res = 0;
    int i = 0;
    my_putchar(c);
    first = reverse_str(first);
    second = reverse_str(second);

    for (; !!first[i] || !!second[i]; i += 1) {
        if (!!first[i] && !!second[i]) {
            res = ((first[i] - c) + (second[i] - c) + ret);
            my_putnbr(res % 10);
            ret = res / 10;
        }
        else if (!!first[i] && !second[i]) {
            res = (first[i] - c) + ret;
            my_putnbr(res % 10);
            ret = res / 10;
        } else if (!!second[i] && !first[i]) {
            res = (second[i] - c) + ret;
            my_putnbr(res % 10);
            ret = res / 10;
        }
    }
}

char *reverse_str(char *str)
{
    char *dest = NULL;
    int idx_reverse = my_strlen(str);
    
    if ((dest = malloc(sizeof(char) * my_strlen(str))) == NULL) exit(84);
    my_memset(dest, strlen(str));
    for (int i = 0; str[i]; i += 1, idx_reverse -= 1) dest[i] = str[idx_reverse];
    return (dest);
}