#include "./my.h/my.h"

int main(void)
{
    my_write_char('c');
    return 0;
}

void    my_write_char(char c)
{
    write(1, &c, 1);
}