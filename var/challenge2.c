# include <stdio.h>

int main() {
    printf("veuillez saisire la temperature en celsius : ");
    float celsius;
    scanf("%f", &celsius);
    float kelvin = celsius + 273.15;
    printf("La temperature en kelvin est : %.2f\n", kelvin);
    return 0;
}