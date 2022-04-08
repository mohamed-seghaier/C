#include "./my.h/my.h"

int main(void)
{
    struct s_personne toto;
    toto.age = 18;
    toto.nom = "Doe";
    toto.prenom = "Jhon";

    printf("%s %s, %d ans.", toto.prenom, toto.nom, toto.age);

    return 0;
}
