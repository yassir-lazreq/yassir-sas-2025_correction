# include <stdio.h>
# include <string.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    printf("le mot est : %s\n", word);
    char word2[100];
    fgets(word2, 100, stdin);
    printf("le mot 2 est : %s\n", word2);
    if (strcmp(word, word2) == 0){
        printf("les deux mots sont identiques \n");
    } else {
        printf("les deux mots sont different \n");
    }
}