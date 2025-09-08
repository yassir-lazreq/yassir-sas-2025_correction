# include <stdio.h>

int main(){
    printf("veuillez saisir un nombre :\n");
    int n;
    scanf("%d", &n);
    for(int i=10; i >=1; i--){
        printf("%d * %d = %d\n", i, n, i*n);
    }
}