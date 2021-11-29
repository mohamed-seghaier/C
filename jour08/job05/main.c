#include "./my.h/my.h"

int main(void)
{
    printf("%d, %d, %d, %d", is_even(1), is_even(0), is_even(100), is_even(55));

    return 0;
}


int
is_even(int nb) {
    return nb % 2;
}