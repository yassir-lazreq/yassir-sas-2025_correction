# include <stdio.h>
# include <math.h>

int main(){
    printf("veuillez entre 3 nombre reel : \n");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float moyenne_geometrique = pow(a * b * c, 1.0/3.0);
    printf("La moyenne geometrique est : %.2f\n", moyenne_geometrique);
    return 0;
}