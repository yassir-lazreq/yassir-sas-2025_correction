# include <stdio.h>
# include <string.h>

int main(){
    char word1[100];
    fgets(word1, 100, stdin);
    char word2[100];
    fgets(word2, 100, stdin);
    word1[strcspn(word1, "\n")] = 0;
    word2[strcspn(word2, "\n")] = 0;
    strcat(word1, word2);
    printf("le mot concatener est : \n%s\n", word1);
}