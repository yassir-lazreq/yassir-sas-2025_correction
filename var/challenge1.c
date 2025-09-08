# include <stdio.h>

int main() {
    printf("veuillez entrer votre nom : ");
    char nom[20];
    scanf("%s", nom);
    printf("veuillez entrer votre prenom : ");
    char prenom[20];
    scanf("%s", prenom);
    printf("veuillez entrer votre age : ");
    int age;
    scanf("%d", &age);
    printf("veuillez entrer votre sexe : ");
    char sexe[10];
    scanf("%s", sexe);
    printf("veuillez entrer votre email : ");
    char email[30];
    scanf("%s", email);
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Email: %s\n", email);
    return 0;
}