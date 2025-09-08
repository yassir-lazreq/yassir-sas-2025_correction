# include <stdio.h>

int main(){
    printf("veuillez entrer les instants demandés :");
    int h1,h2,m1,m2,s1,s2;
    printf("l'instnant 1 :");
    printf ("h1 : ");
    scanf("%d", &h1);
    printf ("m1 : ");
    scanf("%d", &m1);
    printf ("s1 : ");
    scanf("%d", &s1);
    printf ("l'instnant 2 :");
    printf ("h2 : ");
    scanf("%d", &h2);
    printf ("m2 : ");
    scanf("%d", &m2);
    printf ("s2 : ");
    scanf("%d", &s2);
    int h3,m3,s3;
    if (h1 > h2)
    {
        printf("l'instnant 1 est superieur à l'instnant 2");

    }else if (h1 < h2)
    {
        printf("l'instnant 2 est superieur à l'instnant 1");
    }else
    {
        if (m1 > m2)
        {
            printf("l'instnant 1 est superieur à l'instnant 2");
        }else if (m1 < m2)
        {
            printf("l'instnant 2 est superieur à l'instnant 1");
        }else
        {
            if (s1 > s2)
            {
                printf("l'instnant 1 est superieur à l'instnant 2");
            }else if (s1 < s2)
            {
                printf("l'instnant 2 est superieur à l'instnant 1");
            }else
            {
                printf("les deux instants sont egaux");
            }
            
        }
    }
    
    
}