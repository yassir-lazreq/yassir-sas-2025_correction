# include <stdio.h>
# include <math.h>

int main (){
    printf("veuillez entre 3 nombre reel : ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int delta = pow(b,2) - 4*a*c;
    if (delta < 0)
    {
        printf("pas de solutions reel");
    }else if (delta == 0)
    {
        float solution = (float) -b/2*a ;
    }else
    {
        float x1 = (float) (-b - sqrt(delta))/2*a;
        float x2 = (float) (-b + sqrt(delta))/2*a;
        printf("les solutions sont : %.2f et %.2f",x1,x2);
    }
}