#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int, char **);

int error_gest(int, char **);
int is_a_num(char *);

void    add_inf(char *, char *);
char *reverse_str(char *);


void    my_putchar(char);
void    my_putstr(char *);
void    my_putnbr(int);
int my_strlen(char*);
int my_getnbr(char *);
void my_memset(char *, int);

#endif /* !MY_H_ */
