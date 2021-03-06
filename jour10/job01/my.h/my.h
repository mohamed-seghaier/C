#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef struct s_personne {
    char *prenom;
    char *nom;
    int age;
} t_personne;

int     main(void);
char    *my_read(void);
char    *my_strcat(char *, char *);


int     my_clear_struct(t_personne *);
int     initialize_value(t_personne *);
void    my_freetab(char **);
int     count_space(char *);
int     count_malloc(char *, int);
char    **my_strtowordtab(char *);
int     my_showtab(char **);
void    my_putchar(char);
void    my_putstr(char *);
void    my_putnbr(int);
int     my_strlen(char*);
int     my_getnbr(char *);
void    my_memset(char *, int);

#endif /* !MY_H_ */
