#include "./my.h/my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}
void    my_putstr(char *str)
{
    for(int i  = 0; str[i]; i += 1) my_putchar(str[i]);
}

int my_strlen(char *str) {
    
    int i = 0;
    for (; str[i]; i += 1);
    return i;
}

int my_getnbr(char *str) {
    int neg = 1;
    int res = 0;
    int idx = 0;

    if (str[0]  == '-')  {
        neg *= -1;
        idx += 1;
    }
    for (;str[idx]; idx += 1) {
        res *= 10;
        res += str[idx] - '0';
    }
    return res * neg;
}

void    my_putnbr(int nb) {
    if (nb < 0) {
        my_putchar('-');
        my_putnbr(nb * -1);
    }
    else if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
    else my_putchar(nb + 48);
}

void my_memset(char *str, int size) {
    for (int i = 0; i < size; i += 1) str[i] = 0;
}

int my_showtab(char **tab) {
    if (tab == NULL) return -1;

    for (int i = 0; tab[i]; i += 1) my_putstr(tab[i]);

    return 0;
}