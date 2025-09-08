# include <stdio.h>

int main() {
    printf("veuillez entere 2 nombre reel : ");
    float a, b;
    scanf("%f %f", &a, &b);
    float sum = a + b;
    float prod = a * b;
    float diff = a - b;
    printf("La somme est : %.2f\n", sum);
    printf("Le produit est : %.2f\n", prod);
    printf("La difference est : %.2f\n", diff);
    if (b != 0) {
        float div = a / b;
        printf("Le quotient est : %.2f\n", div);
    } else {
        printf("Division par zero impossible.\n");
    }
    return 0;
}