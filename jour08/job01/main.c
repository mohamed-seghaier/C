#include "./my.h/my.h"

int main(void)
{
    char *str = "Salutations camarades je\tsuis Dali\n";
    printf("%d", my_count_words(str));
    return 0;
}

int
my_count_words(char *str) {
    int idx = 0;

    for (int i = 0; str[i]; i += 1)
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') idx += 1;

    return idx == 0 ? -1 : idx;
}