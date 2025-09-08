# include <stdio.h>

int main(){
    int taille1,taille2;
    int val;
    printf("veuillez entre la taille du tableaux 1 : ");
    scanf("%d",&taille1);
    int tab1[taille1];
    printf("veuillez entre les valeur du tableaux 1 \n");
    for(int i=0;i < taille1;i++){
        scanf("%d",&val);
        tab1[i] = val;
    }
    printf("veuillez entre la taille du tableaux 2 : ");
    scanf("%d",&taille2);
    int tab2[taille2];
    printf("veuillez entre les valeur du tableaux 2 \n");
    for(int i=0;i < taille2;i++){
        scanf("%d",&val);
        tab2[i] = val;
    }
    int taille3 = taille1 + taille2;
    int tab3[taille3];
    for (int i = 0; i < taille1; i++)
    {
        tab3[i] = tab1[i];
    }
    for (int i = taille1; i < taille1 + taille2; i++)
    {
        tab3[i] = tab2[i - taille1];
    }
    for (int i = 0; i < taille3; i++)
    {
        printf("%d ",tab3[i]);
    }
    return 0; 
}