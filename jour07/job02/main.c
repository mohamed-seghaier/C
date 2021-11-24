#include "./my.h/my.h"

int main(void)
{
    my_write_str("coucou");
    return 0;;
}

void    my_write_char(char c)
{
    write(1, &c, 1);
}

void    my_write_str(char *str) {
    for (int i = 0; str[i]; i += 1) my_write_char(str[i]);
}