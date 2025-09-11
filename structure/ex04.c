# include <stdio.h>
# include <string.h>

struct point {
    int x;
    int y;
};

int main(){
    struct point pt;
    struct point *ptr = &pt;
    pt.x = 0;
    pt.y = 0;
    printf("Entrez les coordonnees x et y : \n");
    printf("x = ");
    scanf("%d", &ptr->x);
    printf("y = ");
    scanf("%d", &ptr->y);
    printf("Les coordonnees du point sont : (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}