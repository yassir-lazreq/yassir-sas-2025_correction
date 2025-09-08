# include <stdio.h>

int main(){
    int taille;
    float val;
    printf("veuillez entre la taille du tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    printf("veuillez entre les valeur du tableaux \n");
    for(int i=0;i < taille;i++){
        scanf("%f",&val);
        tab[i] = val;
    }
    int sum = 0;
    float moyenne;
    if (taille == 0)
    {
        printf("le tableaux est vide \n");
        return 0;
    }
    for (int i = 0; i < taille; i++)
    {
        sum += tab[i];
    }
    moyenne = (float)sum / taille;
    printf("la somme des valeur du tableaux est : %d \n",sum);
    printf("la moyenne des valeur du tableaux est : %.2f \n",moyenne);
return 0;
}