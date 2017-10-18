#include <stdio.h>

int main()
{
    int i, j;
    for(i = 0; i<=10; ++i)
    {
        for(j = 1; j<=10; ++j)
        {
            printf("%d+%d=%d ",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}
