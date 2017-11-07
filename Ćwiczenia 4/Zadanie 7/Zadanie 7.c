//#include <stdio.h>

int abc(unsigned int n,unsigned int m)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(i%m==0 && i!=m)
		printf("%d\n",i);
		
	}
	return i;
	
}
/*
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",abc(n,m));
	
	return 0;	
}
*/
