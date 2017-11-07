//#include <stdio.h>
/#include <math.h>

float f(float a, float b)
{
   float cc,cc1,dc,dc1;
   dc=modf(a,&cc);
   dc1=modf(b,&cc1);
   if(dc==dc1)
		return 1;
   else
		return 0;
   }
/*
int main()
{
	float a,b;
	scanf("%f %f",&a,&b);
    printf("%f",f(a,b));
    
	return 0;
}
*/
