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
    int min = tab[taille - 1];
    for (int i = taille - 1; i >= 0; i--)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    printf("le min de ce tableaux est : %d",min);
    return 0;
}