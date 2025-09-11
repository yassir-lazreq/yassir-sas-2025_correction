# include <stdio.h>
# include <string.h>

struct rectangle {
    int longueur;
    int largeur;
};

int surface(struct rectangle r){
    return r.longueur * r.largeur;
}

int main(){
    struct rectangle rect;

    printf("veuillez entrer la longueur du rectangle : ");
    scanf("%d",&rect.longueur);

    printf("veuillez entrer la largeur du rectangle : ");
    scanf("%d",&rect.largeur);

    printf("la surface du rectangle est : %d\n",surface(rect));
    return 0;
}