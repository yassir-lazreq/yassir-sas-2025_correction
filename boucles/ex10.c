#include <stdio.h>

int main() {
    int nbr;
    printf("veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    int sum = 0;

    for (int i = 1; i <= nbr; i++) {
        sum += i;
        printf("%d", i);
        if (i != nbr) printf(" + ");
    }
    printf(" = %d\n", sum);

    sum = 0;
    int i = 1;
    while (i <= nbr) {
        sum += i;
        printf("%d", i);
        if (i != nbr) printf(" + ");
        i++;
    }
    printf(" = %d\n", sum);

    return 0;
}
