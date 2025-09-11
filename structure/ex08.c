# include <stdio.h>
# include <string.h>

struct cercle
{
    float rayon;
};

float aire(struct cercle c){
    return 3.14*c.rayon*c.rayon;
}

int main(){
    struct cercle c;
    printf("veuillez entrer le rayon du cercle : ");
    scanf("%f",&c.rayon);
    printf("l'aire du cercle est : %.2f\n",aire(c));
    return 0;
}