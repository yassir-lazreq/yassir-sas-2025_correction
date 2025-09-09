# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = toupper(word[i]);
        }
    }
    printf("le mot en majuscule est : %s\n", word);
    return 0;
}