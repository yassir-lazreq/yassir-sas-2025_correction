# include <stdio.h>

int main(){
    printf("veuillez entre 3 nombre reel : \n");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float moyenne_ponderee = (a*2 + b*3 + c*5) / 10;
    printf("La moyenne ponderee est : %.2f\n", moyenne_ponderee);
    return 0;
}