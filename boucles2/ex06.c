# include <stdio.h>
# include <math.h>
int main(){
    printf("veuillez enter un nombre entier : ");
    int n;
    scanf("%d",&n);
    printf("%d -->  ",n);
    for (int i = 1; i < sqrt(n); i++){
        if (n % i == 0)
        {
            printf("%d  ",i);
            if (i != n / i)
                printf("%d  ",n/i);
        }
    }
    printf("%d\n",n);
}