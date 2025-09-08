# include <stdio.h>

int addition (int a, int b){
    return a + b;
}
int main (){
    int x,y;
    printf("veuillez entre deux nombre : ");
    scanf("%d %d",&x,&y);
    int res = addition(x,y);
    printf("le resultat de l'addition est : %d \n",res);
    return 0;
}