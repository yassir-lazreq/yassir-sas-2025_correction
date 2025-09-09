# include <stdio.h>
# include <string.h>


int main(){
    char chaine[100];
    fgets(chaine, 100, stdin);
    char sousChaine[100];
    fgets(sousChaine, 100, stdin);
    sousChaine[strcspn(sousChaine, "\n")] = 0;
    chaine [strcspn(chaine, "\n")] = 0;
    if (strstr(chaine, sousChaine) != NULL){
        printf("il existe une sous chaine\n");
    } else {
        printf("il n'existe pas de sous chaine\n");
    }
    return 0;
}