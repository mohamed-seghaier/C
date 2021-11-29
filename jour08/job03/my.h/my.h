#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void);
int count_space(char *);
int count_malloc(char *, int);
char **my_strtok(char *);


int my_showtab(char **);
void    my_putchar(char);
void    my_putstr(char *);
void    my_putnbr(int);
int my_strlen(char*);
int my_getnbr(char *);
void my_memset(char *, int);

#endif /* !MY_H_ */
