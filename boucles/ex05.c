#include <stdio.h>

int main() {
    int base, exposant, i;
    
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);
    
    int resultat = 1;
    if (exposant < 0) {
        printf("L'exposant est negatif \n");
    } else {
        for(i = 1; i <= exposant; i++) {
            resultat *= base;
        }
        printf("%d^%d = %d\n", base, exposant, resultat);
    }

    return 0;
}