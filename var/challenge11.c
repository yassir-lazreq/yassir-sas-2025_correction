#include <stdio.h>
#include <math.h>
int main(){
    printf("veuillez entrer la longueur et la largeur du rectangle : ");
    float longueur, largeur;
    scanf("%f %f", &longueur, &largeur);
    float surface = longueur * largeur;
    printf("La surface du rectangle est : %.2f\n", surface);
    return 0;
}