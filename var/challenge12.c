#include <stdio.h>

int main(){
    printf("veuillez entrer un entier de 4 chiffres : ");
    int nbr,rev;
    scanf("%d",&nbr);
    rev = 0;
    rev = rev * 10 + nbr % 10;
    nbr /= 10;
    rev = rev * 10 + nbr % 10;
    nbr /= 10;
    rev = rev * 10 + nbr % 10;
    nbr /= 10;
    rev = rev * 10 + nbr % 10;
    printf("Le nombre inverse est : %d\n", rev);
    return 0;
}