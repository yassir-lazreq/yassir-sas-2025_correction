# include <stdio.h>

int main() {
    printf("veuillez saisir la temperature de l'eau en celsius : ");
    float celsius;
    scanf("%f", &celsius);
    if (celsius < 0)
    {
        printf("solide");
    }
    else if (celsius < 100)
    {
        printf("liquide");
    }
    else
    {
        printf("gazeux");
    }

    return 0;
}