#include <stdio.h>

int main() {
    int n, i = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n == 0) {
        i = 1;
    } else {
        while (n != 0) {
            i++;
            n /= 10;
        }
    }
    printf("Nombre de chiffres : %d\n", i);
    return 0;
}