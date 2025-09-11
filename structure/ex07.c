# include <stdio.h>
# include <string.h>

struct date {
    int jour;
    int mois;
    int annee;
};

void assigner(struct date *d){
    printf("veuillez entrer le jour : ");
    scanf("%d",&d->jour);

    printf("veuillez entrer le mois : ");
    scanf("%d",&d->mois);

    printf("veuillez entrer l'annee : ");
    scanf("%d",&d->annee);
}

int main(){
    struct date d;

    assigner(&d);

    printf("Date saisie : %d/%d/%d\n", d.jour, d.mois, d.annee);

    return 0;
}