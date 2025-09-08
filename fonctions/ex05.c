# include <stdio.h>

int factoriel (int a){
    if (a == 0) return 1;
    return a * factoriel (a-1);}
int main (){
    int x;
    printf("veuillez entre un nombre entier positif : ");
    scanf("%d",&x);
    int fact = factoriel (x);
    printf("le factoriel de %d est : %d \n",x,fact);
    return 0;
}