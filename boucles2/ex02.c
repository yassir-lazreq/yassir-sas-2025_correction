# include <stdio.h>

int main(){
    printf("veillez saisir un nombre :\n");
    int n,k=1;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for (int j = 1; j < i; j++){
            printf(" ");
        }
        for (int j = 1; j <= k ; j++){
            printf("*");
        }
        k+=2;
        printf("\n");
    }
}