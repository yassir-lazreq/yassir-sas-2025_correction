# include <stdio.h>

int main() {
    int exposant,base,i = 0, res = 1;
    printf("veuillez entrer la base : ");
    scanf("%d",&base);
    printf("veuillez entrer l'exposant : ");
    scanf("%d",&exposant);
    if (exposant == 0)
    {
        printf("le resultat est 1\n");
        return 0;
    }
    if (base == 0)
    {
        printf("le resultat est 0\n");
        return 0;
    }
    while (i < exposant)
    {
        res *= base;
        i++;
    }
    printf("le resultat est %d\n",res);
    return 0;
}