# include <stdio.h>
# include <string.h>

struct personne
{
    char nom[50];
    char prenom[50];
    int age;
};

int main(){
    struct personne p;
    strcpy(p.nom,"yassir");
    strcpy(p.prenom,"lazreq");
    p.age = 21;
    printf("Nom : %s \nPrenom : %s \nAge : %d",p.nom,p.prenom,p.age);
}
