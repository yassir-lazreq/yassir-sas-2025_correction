# include <stdio.h>

int main() {
    int tab[11] = {1,2,3,4,5,6,7,8,9,0,5};
    
    printf("[");
    for (int i = 0; i < 11; i++)
    {
        printf(" %d ",tab[i]);
        if (i != 11 - 1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}