#include "./my.h/my.h"

int main(void)
{
    char *str = "Salutations camarades je suis Dali";

    my_strtowordtab(str); 
    return 0;
}


void
my_freetab(char **tab) {
    for (int i = 0; tab[i]; i += 1) free(tab[i]);
    free(tab);
}