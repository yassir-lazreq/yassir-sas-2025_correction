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
    int max = tab[0];
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    
    printf("le max de ce tableaux est : %d",max);
    return 0;
}