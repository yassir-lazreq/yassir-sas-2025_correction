#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Entrez le nombre de termes de Fibonacci a afficher : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}