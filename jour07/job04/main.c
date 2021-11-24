#include "./my.h/my.h"

int main(void)
{
    char *str = "SalutAtIoN CamaRadEs Je SuIs DaLi";
    str = my_strtolower(str);
    printf("%s\n", str);
    return 0;
}

char *my_strtolower(char *str) {
    int i = 0;
    char *dest = malloc(sizeof(char) * strlen(str));
    strcpy(dest, str);

    for (i = 0; dest[i]; i += 1) {
        if (dest[i] >= 'A' && dest[i] <= 'Z') {
            dest[i] = dest[i] + 32;
        }
    }
    return dest;
}