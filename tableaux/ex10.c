# include <stdio.h>

int main() {
    int taille,val;
    printf("veuillez entre la taille du tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    printf("veuillez entre les valeur du tableaux \n");
    for(int i=0;i < taille;i++){
        scanf("%d",&val);
        tab[i] = val;
    }
    int rech;
    printf("entrez une valeur a rechercher : ");
    scanf("%d",&rech);
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == rech)
        {
            printf("la valeur %d est trouver a l'index %d \n",rech,i + 1);
            return 0;
        }
    }
    printf("la valeur %d n'est pas trouver dans le tableaux \n",rech);
    return 0;
}