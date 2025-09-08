# include <stdio.h>

int main() {
    printf("veuillez saisire la vitesse en km/h : ");
    float kmh;
    scanf("%f", &kmh);
    float ms = kmh * 0.27778;
    printf("La vitesse en m/s est : %.2f\n", ms);
    return 0;
}