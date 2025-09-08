# include <stdio.h>

int main() {
    int taille,val,sum = 0;
    printf("veuillez entre la taille du tableaux : ");
    scanf("%d",&taille);
    int tab[taille];
    printf("veuillez entre les valeur du tableaux \n");
    for(int i=0;i < taille;i++){
        scanf("%d",&val);
        tab[i] = val;
        sum += val;
    }
    printf("la somme est : %d",sum);
    return 0;
}