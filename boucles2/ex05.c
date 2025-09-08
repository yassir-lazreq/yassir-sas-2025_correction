# include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    int somme = 0;
    for (int i = 0; i <= n; i++)
    {
        somme += i;
    }
    printf("%d\n",somme);
    return 0;
}