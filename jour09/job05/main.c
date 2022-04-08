#include "./my.h/my.h"

int main(void)
{
    t_personne *personne;

    if ((personne = malloc(sizeof(t_personne))) == NULL) return 84;
    if ((personne->nom = malloc(sizeof(char) * strlen("Dupont"))) == NULL) return 84;
    if ((personne->prenom = malloc(sizeof(char) * strlen("Toto"))) == NULL) return 84;


    strcpy(personne->nom, "Doe");
    strcpy(personne->prenom, "Jhon");
    personne->age = 42;

    printf("%s %s, %d ans.", personne->prenom, personne->nom, personne->age);

    return 0;
}
