# include <stdio.h>

int main(){
    printf("veuillez saisir un nobre entier : ");
    int nbr;
    int bin = 0;
    scanf("%d",&nbr);
    printf("decimal : %d \n",nbr);
    printf("hexadecimal : %x \n",nbr);
    printf("binary : ");
    while (nbr != 0)
    {
        bin = bin * 10 + nbr%2;
        nbr /= 2;
    }
    while (bin != 0)
    {
        printf("%d", bin % 10);
        bin /= 10;
    }
    printf("\n");
    return 0;
}