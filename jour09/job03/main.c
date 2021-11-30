#include "./my.h/my.h"

int main(void)
{
    struct s_personne personne = {"Toto", "Dupont", 18};

    printf("%s, %s, %d", personne.nom, personne.prenom, personne.age);

    personne.nom = "Doe";
    personne.prenom = "Jhon";
    personne.age = 42;

    printf("%s, %s, %d", personne.nom, personne.prenom, personne.age);


    return 0;
}
