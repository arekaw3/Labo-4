#include <stdio.h>

unsigned int f(unsigned int x, unsigned int y)
{
    if(x==y)
    {
        return x;
    }
    else if(x>y)
    {
        return 2*f(x/y,y);
    }
    else if(y>x)
        return 2*f(x,y/x);
}

int main()
{
	unsigned int x,y;
	scanf("%d %d",&x,&y);
    printf("%d", f(x,y));
    
	return 0;
}
