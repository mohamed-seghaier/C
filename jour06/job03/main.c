#include "./my.h/my.h"

int main(int argc, char **argv)
{
    if (argc > 1)
        printf("%d\n", my_add(my_getnbr(argv[1]), my_getnbr(argv[2])));
    else return 84;
    return 0;
}

int my_add(int one, int two) {return one + two;}