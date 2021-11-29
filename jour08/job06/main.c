#include "./my.h/my.h"

int main(void)
{
    char **str = malloc(sizeof(char *) * 4);
    str[0] = "toto";
    str[1] = "titi";
    str[2] = "tutu";
    str[3] = NULL;
    printf("%d\n",my_showtab(str));
    printf("%d\n",my_showtab(NULL));    
    return 0;
}

int my_showtab(char **tab) {
    if (tab == NULL) return -1;

    for (int i = 0; tab[i]; i += 1) my_putstr(tab[i]);

    return 0;
}