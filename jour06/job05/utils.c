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