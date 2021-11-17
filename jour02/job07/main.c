#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	int	(*ptab_t)	(char *);

int    count_a(char *str)
{
    int idx_str = 0;
    int idx_sign = 0;
    for (; str[idx_str]; idx_str += 1)
        if (str[idx_str] == 'a' || str[idx_str] == 'A') idx_sign += 1;
    
    return idx_sign;
}

int    count_e(char *str)
{
    int idx_str = 0;
    int idx_sign = 0;
    for (; str[idx_str]; idx_str += 1)
        if (str[idx_str] == 'e' || str[idx_str] == 'E') idx_sign += 1;
    
    return idx_sign;
}

int    count_i(char *str)
{
    int idx_str = 0;
    int idx_sign = 0;
    for (; str[idx_str]; idx_str += 1)
        if (str[idx_str] == 'i' || str[idx_str] == 'I') idx_sign += 1;
    
    return idx_sign;
}

int    count_all(char *str)
{
    int idx_str = 0;
    int idx_sign = 0;
    for (; str[idx_str]; idx_str += 1) {
        if (str[idx_str] == 'a' || str[idx_str] == 'A') idx_sign += 1;
        else if (str[idx_str] == 'e' || str[idx_str] == 'E') idx_sign += 1;
        else if (str[idx_str] == 'i' || str[idx_str] == 'I') idx_sign += 1;
    }
    
    return idx_sign;
}

int	my_pretab(int idx, char *str)
{
	ptab_t	check[5];

	check[0] = &count_a;
	check[1] = &count_e;
	check[2] = &count_i;
	check[3] = &count_all;
	check[4] = NULL;
	return ((*check[idx])(str));
}
        
int check_sign(char *str, char sign)
{
        char *lettres = "aeix";
        int i = 0;

        for (; lettres[i]; i += 1) {
                if (lettres[i] == sign) {
                        return (my_pretab(i, str));

                }
        }
        return 0;
}

int main(void)
{
    char *str = "Tam frui fortuna publicae debeo conficiat omnia facere si eximia ille ille rei rei publicae rei publicae non publicae vellet.";
    char sign;

    printf("La phrase est : %s\n", str);
    printf("Entrez la lettre que vous voulez compter(a, e, ou i) ou x si vous voulez toutes les compter :\n");
    scanf("%c", &sign);

    sign += sign < 97 ? 32 : 0;
    
    printf("Il y a %d fois la ou les lettres demandées.\n", check_sign(str, sign));
    return (0);


}