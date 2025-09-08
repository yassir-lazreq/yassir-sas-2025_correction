#include <stdio.h>

int main(){
    printf("veuillez entrer 2 nombres entier : ");
    int a,b;
    scanf("%d%d",&a,&b);
    int sum;
    if (a == b)
    {
        sum = (a + b) * 3;
        printf("le triple de %d est : %d",a,sum);
    }
    else
    {
        sum = a+b;
        printf("la somme de %d + %d = %d",a,b,sum);
    }
}