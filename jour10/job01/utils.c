#include "./my.h/my.h"

void
my_putchar(char c)
{
    write(1, &c, 1);
}

void
my_putstr(char *str)
{
    for(int i  = 0; str[i]; i += 1) my_putchar(str[i]);
}

int
my_strlen(char *str) {
    
    int i = 0;
    for (; str[i]; i += 1);
    return i;
}

int
my_getnbr(char *str) {
    int neg = 1;
    int res = 0;
    int idx = 0;

    if (str[0]  == '-')  {
        neg *= -1;
        idx += 1;
    }
    for (;str[idx]; idx += 1) {
        res *= 10;
        res += str[idx] - '0';
    }
    return res * neg;
}

void
my_putnbr(int nb) {
    if (nb < 0) {
        my_putchar('-');
        my_putnbr(nb * -1);
    }
    else if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
    else my_putchar(nb + 48);
}

void
my_memset(char *str, int size) {
    for (int i = 0; i < size; i += 1) str[i] = 0;
}

int
my_showtab(char **tab) {
    if (tab == NULL) return -1;

    for (int i = 0; tab[i]; i += 1) my_putstr(tab[i]);

    return 0;
}


char
**my_strtowordtab(char *str) {
    int idx = 0;
    int i = 0;
    int j = 0;
    char **res = NULL;

    if ((res = malloc(sizeof(char *) * count_space(str) + 1)) == NULL) return NULL;
    if ((res[j] = malloc(sizeof(char) * count_malloc(str, 0))) == NULL) return NULL;
    for (; str[i]; i += 1) {
        if (str[i] != ' ') {
            res[j][idx] = str[i];
            idx += 1;
        } else {
            j += 1;
            if ((res[j] = malloc(sizeof(char) * count_malloc(str, j))) == NULL) return NULL;
            idx = 0;
        }
    }
    res[j + 1] = NULL;
    return res;
}

int
count_malloc(char *str, int idx) {
    if (str[idx] == ' ') idx += 1;
    for (; str[idx] != ' '; idx += 1);
    return idx;
}

int
count_space(char *str) {
    int j = 0;
    for (int i = 0; str[i]; i += 1) j += str[i] == ' ' ? 1 : 0;

    return j + 1;
}

void
my_freetab(char **tab) {
    for (int i = 0; tab[i]; i += 1) free(tab[i]);
    free(tab);
}

int
my_clear_struct(t_personne *personne) {
    free(personne);
    return (initialize_value(personne));
}
int
initialize_value(t_personne *personne) {


    if ((personne->prenom = malloc(sizeof(char) * strlen("jhon"))) == NULL) return 84;
    personne->prenom = "Jhon";
    if ((personne->nom = malloc(sizeof(char) * strlen("doe"))) == NULL) return 84;
    personne->nom = "Doe";
    personne->age = 42;


    return 0;

}
