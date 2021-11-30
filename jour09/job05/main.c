#include "./my.h/my.h"

int main(void)
{
    t_personne *personne;
    
    if ((personne = malloc(sizeof(t_personne))) == NULL) return 84;

    if ((personne->prenom = malloc(sizeof(char) * strlen("jhon"))) == NULL) return 84;
    personne->prenom = "jhon";
    if ((personne->nom = malloc(sizeof(char) * strlen("doe"))) == NULL) return 84;
    personne->nom = "doe";
    personne->age = 42;

    printf("%s, %s, %d", personne->nom, personne->prenom, personne->age);

    return 0;

}
