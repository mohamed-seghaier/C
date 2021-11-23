#include "./my.h/my.h"

int main(int argc, char **argv)
{
    if (argc > 0)
        for (int i = 0; argv[i]; i += 1) printf("%s\n", argv[i]);
    
    return 0;
}

