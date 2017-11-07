#include <stdio.h>
#include <math.h>

int f(int x)
{
    int ile=0;
    int d;
    while(x!=0)
    {
       d=x%10;
       if(d%3==0)
       {
           ile++;
       }
       x = x/10;
    }
    return ile;
}
int main()
{
	int x;
	scanf("%d",&x);
    printf("Liczba cyfr podzielienych przez 3 = %d", f(x));
	
	return 0;
}
