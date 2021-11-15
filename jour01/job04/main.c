#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char *str = "Hello world\0";

        puts(str);
        return (0);
}
