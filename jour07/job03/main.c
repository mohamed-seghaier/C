#include "./my.h/my.h"

int main(void)
{
    char *str = malloc(sizeof(char) * 35);
    str = "salutations camarades je suis dali";
    str = my_ucfirst(str);
    printf("%s\n", str);
    return 0;
}

char *my_ucfirst(char *str) {
    int idx_uc = 0;
    int i = 0;
    char *dest = malloc(sizeof(char) * strlen(str));
    strcpy(dest, str);

    for (i = 0; dest[i]; i += 1) {
        if (idx_uc == 0 && dest[i] > 96 && dest[i] < 123) {
            dest[i] = dest[i] - 32;
            idx_uc = 1;
        } else if (dest[i] == ' ') idx_uc = 0;
    }
    return dest;
}