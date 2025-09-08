#include <stdio.h>

int main() {
    int n, i, somme = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        somme += i;
    }
    printf("Somme avec boucle : %d\n", somme);
    return 0;
}