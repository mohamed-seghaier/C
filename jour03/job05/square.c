#include "my.h"

void    create_square(int h, int v) {
    create_vert(v, '_');
    putchar('\n');
    create_hor(h, (v - 1));
}

void    create_vert(int nb, char c) {
    my_putchar(c);
    if (nb > 1) create_vert(nb - 1, c);
}

void    create_hor(int nb, int space) {
    my_putchar(('|'));
    if (nb >= 2) create_vert(space, ' ');
    else if (nb == 1) create_vert(space, '_');
    my_putstr("|\n");
    if (nb > 1) create_hor((nb - 1), space);
}