# include <stdio.h>

int maximum (int a, int b)
{
    if (a > b)
    {
        return a;
    }else{
        return b;
    }
}
int main (){
    int x,y;
    printf("veuillez entre deux nombre : \n");
    scanf("%d %d",&x,&y);
    int max = maximum(x,y);
    while (y > 0)
    {
        scanf("%d",&y);
        x = max;
        max = maximum(x,y);
        if (y == 0)
        {
            break;
        }
    }
    printf("le nombre le plus grand est : %d \n",max);
    return 0;
}