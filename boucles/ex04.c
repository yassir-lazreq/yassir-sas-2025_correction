#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'impairs a afficher : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}