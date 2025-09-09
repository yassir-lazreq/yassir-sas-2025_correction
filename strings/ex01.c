# include <stdio.h>
# include <string.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    printf("le mot est : %s\n", word);
}