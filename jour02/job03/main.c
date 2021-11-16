#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	void	(*ptab_t)	(int, int);

void    my_mul(int a, int b)
{
        printf("%d\n", (a * b));
}

void    my_add(int a, int b)
{
        printf("%d\n", (a + b));
}

void    my_sub(int a, int b)
{
        printf("%d\n", (a - b));
}

void    my_div(int a, int b)
{
        printf("%d\n", (a / b));
}

void    my_mod(int a, int b)
{
        printf("%d\n", (a % b));
}

void	my_pretab(int idx, int a, int b)
{
	ptab_t	check[6];

	check[0] = &my_add;
	check[1] = &my_mul;
	check[2] = &my_sub;
	check[3] = &my_div;
	check[4] = &my_mod;
	check[5] = NULL;
	(*check[idx])(a, b);
}
        
void checkpoint(char sign, int a, int b)
{
        char *operation = "+*-/%";
        int i = 0;

        for (; operation[i]; i += 1) {
                if (operation[i] == sign) {
                        my_pretab(i, a, b);

                }
        }
}

int main(void)
{
        char sign;
        int a = 10;
        int b = 2;

        printf("Signe de l'opération : ");
        scanf("%c", &sign);
        checkpoint(sign, a, b);
        return (0);
}
