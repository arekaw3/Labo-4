#include <stdio.h>

int f(int n)
{
    if(n<6)
    {
        return n;
    }
    if(n>=6)
    {
        int i;
        int sum=0;
        for(i=1;i<=3;i++)
        {
            sum+=f(n-2*i);
        }
        return sum;
    }
}
int main()
{
	int n;
	scanf("%d",&n);
    printf("%d", f(n));
    
	return 0;
}
