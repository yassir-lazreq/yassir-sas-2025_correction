# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main () {
    printf("Entrez un entier positif : ");
    int n;
    char mpass;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erreur : l'entier doit être positif.\n");
        return 1;
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        char choice = rand() %  3;
        if (choice == 0)
        {
            mpass = '0' + rand() % 10;
        }else if (choice == 1)
        {
            mpass = 'A' + rand() % 26;
        }else
        {
            mpass = 'a' + rand() % 26;
        }
        printf("%c", mpass);
    }
    printf("%c", mpass);
    return 0;
}