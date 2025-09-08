# include <stdio.h>

int main() {
    printf("veuillez saisire la distance en km : ");
    float km;
    scanf("%f", &km);
    float yards = km * 1093.61;
    printf("La distance en yards est : %.2f\n", yards);
    return 0;
}