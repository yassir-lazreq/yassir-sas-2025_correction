# include <stdio.h>

int main(){
    printf("veuillez entre le nombre des annee : ");
    int annee;
    scanf("%d",&annee);
    int mois = annee * 12;
    int jours = annee * 365;
    int heures = jours * 24;
    int minutes = heures * 60;
    int secondes = minutes * 60;
    printf("options : \n");
    printf("1. mois \n");
    printf("2. jours \n");
    printf("3. heures \n");
    printf("4. minutes \n");
    printf("5. secondes \n");
    int choix;
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Le nombre de mois est : %d\n", mois);
            break;
        case 2:
            printf("Le nombre de jours est : %d\n", jours);
            break;
        case 3:
            printf("Le nombre d'heures est : %d\n", heures);
            break;
        case 4:
            printf("Le nombre de minutes est : %d\n", minutes);
            break;
        case 5:
            printf("Le nombre de secondes est : %d\n", secondes);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
}