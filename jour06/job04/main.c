#include "./my.h/my.h"

int main(int argc, char **argv)
{
    if (argc > 1 && argc < 4) {
        my_draw_square(my_getnbr(argv[1]), my_getnbr(argv[2]));
    }
    else return 84;
    return 0;
}

void    my_draw_square(int line, int column) {
    int i = 0;

    for (i = 0; i < column; i += 1) my_draw_lines(line);
}

void my_draw_lines(int line) {
    for (int i = 0; i < line; i += 1) my_putchar('*');
    my_putchar('\n');
}