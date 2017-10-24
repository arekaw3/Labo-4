#include <stdio.h>

float pole(float a, float b)
{
	scanf("%f %f",&a,&b);
	
	return((a*b)/2);
}

int main()
{
	float wynik = pole(0,0);
	printf("pole trojkata= %f",wynik);
	
	return 0;
}
