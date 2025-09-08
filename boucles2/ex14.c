# include <stdio.h> 

int main () {
    char *jours[7] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanch"};
    int start;
    printf ("veuillez entre le joure a commancer par 0 ex, 0=lundi... : " );
    scanf("%d",&start);
    for (int i = 1; i <= 7; i++)
    {
        int index = (start + i) % 7;
        printf("%s \n",jours[index]);
    }
    
}