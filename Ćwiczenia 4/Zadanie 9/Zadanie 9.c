#include <stdio.h>

int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a*a+b*b==c*c || a*a+c*c==b*b || a*a+c*c==a*a)
	printf("T");
	else if (a*a+b*b!=c*c || a*a+c*c!=b*b || a*a+c*c!=a*a)
	printf("N");
	return 0;
}
