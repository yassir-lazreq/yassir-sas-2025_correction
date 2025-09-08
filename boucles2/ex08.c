# include <stdio.h>

int main (){
    int n , gauche, droite, mid,x ;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int tableau[n];
    printf("veuillez entrer les elements du tableau : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    gauche = 0;
    droite = n - 1;
    printf("veuillez entrer l'element a chercher : ");
    scanf("%d", &x);
    while (gauche <= droite)
    {
        mid = (gauche + droite) / 2;
        if (x == tableau[mid])
        {
            printf("le element recherche est %d\n",x);
            return 0;
        }else if (x > tableau[mid])
        {
            gauche = mid + 1;
        }else
        {
            droite = mid - 1;
        }
    }
    printf("L'element n'a pas ete trouve.\n");
    return 0;
}