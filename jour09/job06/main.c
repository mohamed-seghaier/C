#include "./my.h/my.h"

int main(void)
{
    t_personne *personne;

    if ((personne = malloc(sizeof(t_personne))) == NULL) return 84;
    if (initialize_value(personne) == 84) return 84;

    printf("%s, %s, %d", personne->nom, personne->prenom, personne->age);
    my_clear_struct(personne);
    printf("%s, %s, %d", personne->nom, personne->prenom, personne->age);
    return 0;
}

int
my_clear_struct(t_personne *personne) {
    free(personne);
    return (initialize_value(personne));
}
int
initialize_value(t_personne *personne) {
    

    if ((personne->prenom = malloc(sizeof(char) * strlen("jhon"))) == NULL) return 84;
    personne->prenom = "jhon";
    if ((personne->nom = malloc(sizeof(char) * strlen("doe"))) == NULL) return 84;
    personne->nom = "doe";
    personne->age = 42;


    return 0;

}
