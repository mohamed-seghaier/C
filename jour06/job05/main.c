#include "./my.h/my.h"

int main(int argc, char **argv)
{
    if (error_gest(argc, argv) != -1) {
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

int error_gest(int argc, char **argv) {
    if (argc != 3)  {
        my_putstr("Nombre d'arguments incorrect, Veuillez entrer deux nombres.\n");
        return -1;
    }

    if (is_a_num(argv[1]) == -1 || is_a_num(argv[2]) == -1) {
        my_putstr("Arguments invalides, veuillez entrer des entiers strictement positifs.\n");
        return -1;
    }
    return 1;
}

int is_a_num(char *str) {
    for (int i = 0; str[i]; i += 1) {
        if (str[i] < '0' || str[i] > '9') return -1;
    }
    return 1;
}