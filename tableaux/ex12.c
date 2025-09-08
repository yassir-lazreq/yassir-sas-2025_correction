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
    printf("les valeur paire du tableaux sont : \n");
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] % 2 == 0)
        {
            printf("%d ",tab[i]);
        }
    }
return 0;
}