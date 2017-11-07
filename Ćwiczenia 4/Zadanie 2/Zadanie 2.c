//#include <stdio.h>

int fun(unsigned int x,unsigned int y)
{
	if(y==0)
	return x;
	else if(x==0 && y==x)
	return x;
	else if(x>0 && y>0)
	return fun(x-1,y)+fun(x,y-1);
}
/*
int main()
{
	unsigned int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",fun(x,y));
	
	return 0;
}
*/
