#include "./my.h/my.h"

int
main(void)
{
    printf("%s", my_read());
    return 0;
}


char
*my_read(void) {
    char	tmp[2];
    char	*dest = "";
    int	i = 0;
    int	j = 0;

    my_memset(dest, my_strlen(dest));
    while ("Dali") {
        if ((read(0, tmp, 1)) == -1)
            return (j == 0 ? NULL : dest);
        if (tmp[i] == '\n')
            return (dest);
        if ((tmp[0]) == 0)
            return (NULL);
        dest = my_strcat(dest, tmp);
        j += 1;
    }
}

char
*my_strcat(char *first, char *second)
{
    int	i = my_strlen(first);
    int	j = my_strlen(second);
    int	k = 0;
    char	*tmp =NULL;

    if ((tmp = malloc(sizeof(char) * (i + j) + 1)) == NULL) return(NULL);
    my_memset(tmp, my_strlen(tmp));
    for (i = 0; first[i]; i += 1, k += 1)
        tmp[k] = first[i];
    for (i = 0; second[i]; i += 1, k += 1)
        tmp[k] = second[i];
    return (tmp);
}
