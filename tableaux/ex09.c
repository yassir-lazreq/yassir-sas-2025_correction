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
        int tab2[taille];
        for (int i = 0; i < taille; i++)
        {
            tab2[i] = tab[i];
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
        printf("] \n");
        printf("[ ");
        for (int i = taille - 1; i >= 0; i--)
        {
            printf(" %d ",tab2[i]);
            if (i != 0)
            {
                printf(",");
            }
        }
        printf("] \n");
        return 0;
    }