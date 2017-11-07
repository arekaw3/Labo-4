//#include <stdio.h>

int pts(int n)
{
	int i;
	for(i=1;i<=n;i++)
	if(i*i*i==n)
	return i;
}

/*
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",pts(n));
	return 0;
}
*/
