# include <stdio.h>
# include <string.h>

struct produit {
    char  nom[50];
    char  prix[50];
    int  quantite;
};

int main(){

    struct produit tab_produit[1000];
    int i = 0;
    while (1)
    {
        char choix;
        printf("veuillez entrer le nom du produit : ");
        fgets(tab_produit[i].nom,50,stdin);
        
        printf("veuillez entrer le prix du produit : ");
        fgets(tab_produit[i].prix,50,stdin);
        
        printf("veuillez entrer la quantite du produit : ");
        scanf("%d", &tab_produit[i].quantite);
        getchar();
        i++;
        printf("Voulez-vous entrer un autre produit ? (o/n) : ");
        scanf(" %c", &choix);
        getchar();
        if (choix != 'o' && choix != 'O') {
            break;
        }
    }
    printf("Liste des produits :\n");
    for (int j = 0; j < i; j++) {
        printf("Produit %d:\n", j + 1);
        printf("Nom: %s", tab_produit[j].nom);
        printf("Prix: %s", tab_produit[j].prix);
        printf("Quantite: %d\n\n", tab_produit[j].quantite);
    }
    return 0;
}