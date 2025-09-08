# include <stdio.h>

int main(){
    printf("veuillez entre une lettre  : \n");
    char lettre;
    scanf(" %c", &lettre);
    if (lettre >= 65 && lettre <= 90){
        printf("la lettre %c est majuscule \n", lettre);
    }else if (lettre >= 97 && lettre <= 122) {
        printf("la lettre %c est minuscule \n", lettre);
    }else {
        printf("la lettre %c n'est pas une lettre \n", lettre);
    }
    return 0;
}