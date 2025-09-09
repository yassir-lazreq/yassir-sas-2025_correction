# include <stdio.h>
# include <string.h>

int main(){
    char word[100];
    fgets(word, 100, stdin);
    printf("le mot est : %s\n", word);
    printf("veuillez entre un caractere a chercher dans le mot : \n");
    char c;
    scanf(" %c", &c);
    int count = 0 ;
    for (int i = 0; i < strlen(word); i++)
    {
        if (c == word[i])
        {
            count++;
        }
    }
    printf("le caractere %c est trouve %d fois dans le mot \n", c, count);
    return 0;
}