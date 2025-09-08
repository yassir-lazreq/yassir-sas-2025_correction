# include <stdio.h>
# include <string.h>

void reverse(char *str) {
    int debut = 0;
    int fin = strlen(str) - 1;
    while (debut < fin) {
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
}

int main() {
    printf("veuillez entrer une chaine de caracteres : ");
    char word[100];
    scanf("%s", word);
    printf("chaine originale : %s\n", word);
    reverse(word);
    printf("chaine inversee : %s\n", word);
    return 0;
}