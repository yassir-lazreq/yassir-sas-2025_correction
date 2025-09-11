# include <stdio.h>
# include <string.h>

struct livre {
    char  titre[50];
    char  auteur[50];
    int annee;
};

struct livre creerLivre(){
    struct livre l;
    char titre[50];
    char auteur[50];
    int year;

    printf("Entrez le titre : ");
    fgets(titre, 50, stdin);
    strcpy(l.titre, titre);

    printf("Entrez l'auteur : ");
    fgets(auteur, 50, stdin);
    strcpy(l.auteur, auteur);

    printf("Entrez l'annee : ");
    scanf("%d", &year);
    l.annee = year;

    return l;
}

int main(){
    struct livre monLivre = creerLivre();
    printf("Titre: %s\n", monLivre.titre);
    printf("Auteur: %s\n", monLivre.auteur);
    printf("Annee: %d\n", monLivre.annee);
    return 0;
}