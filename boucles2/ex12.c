# include <stdio.h>

int main(){
    int n, compt = 1;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int tableau[n];
    printf("veuillez entrer les elements du tableau : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    while (compt != 0)
    {
        compt = 0;
        for (int i = 0; i < n; i++)
        {
            if (tableau[i] > tableau[i + 1])
            {
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                compt++;
            }
        }
        
    }
    printf("le tableau trie est : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
}