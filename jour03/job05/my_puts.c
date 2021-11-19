#include "./my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}
void    my_putstr(char *str)
{
    for(int i  = 0; str[i]; i += 1) my_putchar(str[i]);
}