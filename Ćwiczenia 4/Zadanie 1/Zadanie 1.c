// #include <stdio.h>

int pier(int n)
{
	int i;
	for(i=0;i*i<=n;i++)
	if(i*i==n)
	return i;
}
/*
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",pier(n));
	return 0;
}
*/
