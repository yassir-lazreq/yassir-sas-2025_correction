# include <stdio.h>

int main() {
    int i = 1, moyenne = 0, somme = 0, compteur = 0;
    printf("veuillez entrer un nombre positif : \n");
    while (i != 0)
    {
        scanf("%d", &i);
        if (i <= 0)
        {
            printf("fin du programme.\n");
            break;
        }
        somme += i;
        compteur++;
    }
    moyenne = somme / compteur;
    printf("la moyenne est : %d\n", moyenne);
    return 0;
}