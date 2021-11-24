#include "./my.h/my.h"

int main(void)
{
    char *str = "salutations camarades je suis dali";
    printf("%d\n", my_nboccur(str, 's'));
    return 0;
}

int my_nboccur(char *str, char c) {
    int res = 0;

    for (int i = 0; str[i]; i += 1) {
        if (str[i] == c) res += 1;
    }

    return res == 0 ? -1 : res;
}