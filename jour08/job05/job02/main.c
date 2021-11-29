#include "./my.h/my.h"

int main(void)
{
    char *str = "      salutations  camarades  je suis dali   ";
    printf("%s", my_epur(str));
    return 0;
}

char *my_epur(char *str) {
    int i = strlen(str) - my_startspace(str) - my_endspace(str);
    int j = my_strlen(str) - my_endspace(str);
    char *dest = malloc(sizeof(char) * i);

    my_memset(dest, i);
    for(j = 0, i = my_startspace(str); str[i]; i += 1) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i + 1] || str[i] != ' ') {
            dest[j] = str[i];
            j += 1;
        };
    }
    return dest;
}

int my_startspace(char *str) {
    int i = 0;

    for (; str[i] == ' '; i += 1);
    return i;
}

int my_endspace(char *str) {
    int i = 0;

    for (int j = strlen(str); str[j] != ' '; j -= 1, i += 1);
    return i;
}