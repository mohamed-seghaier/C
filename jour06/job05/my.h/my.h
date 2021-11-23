#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int, char **);
void    my_draw_square(int, int);
void    my_draw_lines(int);
int error_gest(int, char **);
int is_a_num(char *);

void    my_putchar(char);
void    my_putstr(char *);
int my_strlen(char*);
int my_getnbr(char *);


#endif /* !MY_H_ */
