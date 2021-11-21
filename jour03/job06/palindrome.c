#include "my.h/my.h"

int is_a_palindrome(char *str, int d, int f) {
    if (str[d] == str[f]) {
        if (str[d +1] || str[f - 1]) {
            is_a_palindrome(str, d + 1, f - 1);
        }
    }
    if (d == strlen(str) - 1)
        my_putstr("good");
}