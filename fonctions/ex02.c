# include <stdio.h>

int produit (int a, int b){
    return a * b;
}
int main (){
    int x,y;
    printf("veuillez entre deux nombre : ");
    scanf("%d %d",&x,&y);
    int res = produit (x,y);
    printf("le resultat de la multiplication est : %d \n",res);
    return 0;
}