#include <stdio.h>

int fun(int n)
{
if(n<=0 || n==10)
	{
	return 0;
	}
	else
	{
	return (2*fun(n-1)+fun(n-2) + 5);
	}
}

int main()
{ 
    int n;
    scanf("%d", &n);
    printf("%d\n", fun(n));
    return 0;
}
