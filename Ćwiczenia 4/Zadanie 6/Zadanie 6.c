#include <stdio.h>

int f(int n)
{
	int i,x;
	
	while(1)
	{
		x=0;
		n+=1;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			x+=1;
		}
		if(x==0)
		return n;
	}
}

int main() 
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
