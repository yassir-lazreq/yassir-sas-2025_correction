# include <stdio.h>

int main(){
    printf("veuillez entre la date : \n");
    printf("jour : ");
    int jour;
    scanf("%d", &jour);
    printf("mois : ");
    int mois;
    scanf("%d", &mois);
    printf("annee : ");
    int annee;
    scanf("%d", &annee);
    printf("la date est : %02d/%02d/%04d\n", jour, mois, annee);
    switch (mois)
    {
    case 1:
        printf("%d - Janvier - %d \n", jour, annee);
        break;
    case 2:
        printf("%d - Fevrier - %d \n", jour, annee);
        break;
    case 3:
        printf("%d - Mars - %d \n", jour, annee);
        break;
    case 4:
        printf("%d - Avril - %d \n", jour, annee);
        break;
    case 5:
        printf("%d - Mai - %d \n", jour, annee);
        break;
    case 6:
        printf("%d - Juin - %d \n", jour, annee);
        break;
    case 7:
        printf("%d - Juillet - %d \n", jour, annee);
        break;
    case 8:
        printf("%d - Aout - %d \n", jour, annee);
        break;
    case 9:
        printf("%d - Septembre - %d \n", jour, annee);
        break;
    case 10:
        printf("%d - Octobre - %d \n", jour, annee);
        break;
    case 11:
        printf("%d - Novembre - %d \n", jour, annee);
        break;
    case 12:
        printf("%d - Decembre - %d \n", jour, annee);
        break;
    default:
    printf("Mois invalide");
        break;
    }
    return 0;
}