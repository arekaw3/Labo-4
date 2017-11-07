#include <stdio.h>

int suma(int n)
{
	int m;
	m=n+n-1+n-2;
	return m;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",suma(n));
	
	return 0;
}
