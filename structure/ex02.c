# include <stdio.h>
# include <string.h>

struct etudiant {
    char nom[50];
    char prenom[50];
    int note[100];
};
int main(){
    struct etudiant etd;
    int nbr;

    printf("veuillez entrer le nom d'etudiant : ");
    fgets(etd.nom,50,stdin);

    printf("veuillez entrer le prenom d'etudiant : ");
    fgets(etd.prenom,50,stdin);

    printf("veuillez entrer le nombre des notes : ");
    scanf("%d",&nbr);
    int i;
    printf("veuillez saisir les notes d'etudiant : \n");
    for ( i = 0; i < nbr; i++)
    {
        printf("note %d : ",i+1);
        scanf("%d",&etd.note[i]);
    }
    
    printf("Nom : %s",etd.nom);
    printf("Prenom : %s",etd.prenom);
    printf("Notes : ");
    for ( i = 0; i < nbr; i++)
    {
        printf("%d ",etd.note[i]);
    }
    
}


