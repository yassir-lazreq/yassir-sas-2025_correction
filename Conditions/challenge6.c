# include <stdio.h>

int main(){
    printf("veuillez entrer un nombre ");
    int nombre;
    scanf("%d", &nombre);
    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est negatif.\n");
    } else {
        printf("Le nombre est nul.\n");
    }
}