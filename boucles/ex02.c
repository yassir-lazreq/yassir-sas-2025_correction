#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Utiliser un type plus grand pour la factorielle
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        for(i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %llu\n", n, fact);
    }
    return 0;
}