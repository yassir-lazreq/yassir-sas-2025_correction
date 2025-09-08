# include <stdio.h>

int main(){
    int taille,val;
    printf("veuillez entre la taille du tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    printf("veuillez entre les valeur du tableaux \n");
    for(int i=0;i < taille;i++){
        scanf("%d",&val);
        tab[i] = val;
    }
    int change;
    printf("entrez une valeur a remplacer : ");
    scanf("%d",&change);
    int count = 0;
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == change)
        {
            printf("entrez la nouvelle valeur : ");
            int newval;
            scanf("%d",&newval);
            tab[i] = newval;
            count++;
        }
    }
    if (count == 0)
    {
        printf("la valeur %d n'est pas trouver dans le tableaux \n",change);
        return 0;
    }
    for (int i = 0; i < taille; i++)
    {
        printf("%d ",tab[i]);
    }
    
return 0;
}