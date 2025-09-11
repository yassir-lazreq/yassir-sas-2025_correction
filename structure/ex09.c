# include <stdio.h>
# include <string.h>

struct compte {
    char nom[50];
    int solde;
};

void ajouter(struct compte *c,int montant){
    printf("Ajout de %d au compte de %s\n", montant, c->nom);
    c->solde += montant;
}

int main(){
    struct compte c;
    printf("Entrez le nom : ");
    fgets(c.nom,50,stdin);
    c.nom[strcspn(c.nom, "\n")] = 0;

    printf("Entrez le solde : ");
    scanf("%d", &c.solde);

    printf("Avant ajout, solde de %s : %d\n", c.nom, c.solde);
    printf("Entrez le montant a ajouter : ");

    int montant;
    scanf("%d",&montant);
    ajouter(&c,montant);

    printf("Apres ajout, solde de %s : %d\n", c.nom, c.solde);
    return 0;
}