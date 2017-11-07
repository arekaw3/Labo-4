#include <stdio.h>
#include <math.h>

float f(int x, int y)
{
    float cos=x/pow(x*x+y*y,1.0/2.0);
    
	return cos;
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
    printf("cos = %f", f(x,y) );
    
	return 0;
}
