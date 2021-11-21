#include "./my.h/my.h"

int main(void)
{
    char *str;
    char *tmp;
    int nb = 0;

    printf("Entrez le mot que vous voulez tester : \n");
    scanf("%s", tmp);

    while (str[nb++]);
    str = malloc(sizeof(char) * nb);
    for (nb = 0; tmp[nb]; nb += 1) str[nb] = tmp[nb];
    if (is_a_palindrome(str, 0, (strlen(str) - 1)) == 1) my_putstr("right");
    return 0;
}