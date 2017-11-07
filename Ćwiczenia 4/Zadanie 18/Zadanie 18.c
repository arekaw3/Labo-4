#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(0));

    int n,i;

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("%d",rand()%2);
    }
	return 0;
}
