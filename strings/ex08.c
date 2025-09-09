# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = tolower(word[i]);
        }
    }
    printf("le mot en minuscule est : %s\n", word);
    return 0;
}