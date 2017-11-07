#include <stdio.h>
#include <math.h>


float abc(float x,float y,float x1,float y1)
{
    return sqrt(powf(1.0*x-1.0*x1,2.0)+powf(1.0*y-1.0*y1,2.0));
}

int main()
{
    printf("%.2f",abc(1,3,5,2));
    
	return 0;
}

