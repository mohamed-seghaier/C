#include "my.h"

int main(void)
{
    int horizon = 0;
    int vertical = 0;

    my_putstr("Entrez le nombre de lignes :\n");
    scanf("%d", &horizon);
    my_putstr("Entrez le nombre de colonnes :\n");
    scanf("%d", &vertical);

    create_square(horizon, vertical);


    return 0;
}

