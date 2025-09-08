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
        int count = 1;
        while ( count != 0)
        {
            count = 0;
            for (int i = 0; i < taille - 1; i++)
            {
                if (tab[i] > tab[i + 1])
                {
                    int temp = tab[i];
                    tab[i] = tab[i + 1];
                    tab[i + 1] = temp;
                    count++;
                }
            }
        }
        
        printf("[");
        for (int x = 0; x < taille; x++)
        {
            printf(" %d ",tab[x]);
            if (x != taille - 1)
            {
                printf(",");
            }
        }
        printf("]");
        return 0;
    }