#include <stdio.h>

int potega(int n)
{
if(n==1)
	{
	return 2;
	}
	else
	{
	return (potega(n-1))*2;
	}
}

int main()
{ 
    int n;
    scanf("%d", &n);
    printf("%d\n", potega(n));
    return 0;
}
