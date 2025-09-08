# include <stdio.h>

int main(){
    printf("veuillez saisir un nombre :\n");
    int n, somme = 0, prod;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        prod = i * n;
        printf("%d * %d = %d\n", i, n, prod);
        somme += prod;
    }
    printf("somme totale = %d", somme);
}