#include <stdio.h>

int max(int *tab, int size)
{
    int n, max;
    for(n=0;n<size;n++)
    {
        if(n==0) max =*tab;
        else
        {
            if(max<*(tab+n)) max=*(tab+n);
        }
    }
    return max;
}


int main()
{

    int *tab = malloc (10*sizeof(int *));
    int n;
    for(n=0;n<10;n++)
        scanf("%d",tab+n);
    for(n=0;n<10;n++)
        printf("%d ",*(tab+n));
        
    return 0;
}

