# include <stdio.h>

int main (){
    printf("veuillez entrer un character : ");
    char c;
    scanf("%c",&c);
    switch (c)
    {
        case 'a':
        case 'u':
        case 'e':
        case 'i':
        case 'o':
        case 'A':
        case 'U':
        case 'E':
        case 'I':
        case 'O':
        printf("le caractere %c est voyelle \n",c);
    break;
    
    default:
    printf("le caractere %c n'est pas voyelle \n",c);
        break;
    }
}