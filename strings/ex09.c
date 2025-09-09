# include <stdio.h>
# include <string.h>


int main(){
    char word[100];
    fgets(word, 100, stdin);
    char word2[100];
    int j = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] != ' ')
        {
            word2[j] = word[i];
            j++;
        }
    }
    word2[j] = '\0';
    printf("%s\n", word2);
    return 0;
}