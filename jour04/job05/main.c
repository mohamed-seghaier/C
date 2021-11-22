#include "./my.h/my.h"

int main(void)
{
    int tab[9] = {10, 22 ,1 ,25 ,85 ,12 ,35 ,264 ,145};
    int min;
    int max;

    my_pointer_min_max(tab, &min, &max);
    printf("%d, %d", min, max);
    
    return 0;
}

void    my_pointer_min_max(int *tab, int *min, int *max) {
    *min = tab[0];
    *max = tab[0];
    for (int i  = 0; i < 9 ; i += 1) {
        if (tab[i] < *min) *min = tab[i];
        if (tab[i] > *max) *max = tab[i];
    }
}