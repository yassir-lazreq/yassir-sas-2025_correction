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
    printf("[ ");
    for (int i = 0; i < taille; i++)
    {
        printf(" %d ",tab[i]);
        if (i != taille - 1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}