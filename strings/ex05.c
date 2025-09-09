# include <stdio.h>
# include <string.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    printf("le mot est : %s\n", word);
    char reversed[100];
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        reversed[i] = word[len - i - 1];
    }
    reversed[len] = '\0';

    printf("le mot inverse est : %s \n", reversed);
    return 0;
}