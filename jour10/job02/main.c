#include "./my.h/my.h"

int
main(void)
{
    my_puterror("Error");
    return 0;
}

void my_puterror(char *str) {
    write(2, str, my_strlen(str));
}