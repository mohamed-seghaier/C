#include "./my.h/my.h"

int main(void)
{
    printf("%d, %d, %d, %d", is_even(1), is_even(0), is_even(100), is_even(55));

    return 0;
}


int
is_even(int nb) {
    return nb % 2 == 0 ? 1 : 0;
}

int
count_even_nb(int *tab, int is_even) {
    int idx = 0;
    for (int i = 0; tab[i]; i += 1) {
        idx += is_even == 1 && tab[i] %2 == 0 ? 1 : 0;
        idx += is_even == 0 && tab[i] %2 == 1 ? 1 : 0;
    }
    return idx;
}