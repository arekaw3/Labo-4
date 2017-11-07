/*
#include <stdio.h>

int max(int a, int b)
{
	if(a>b)
	return a;
	else 
	return b;

}
*/
int min(int a, int b)
{
	return a+b-max(a,b);
}
/*
int main()
{
	int a,b,m;
	scanf("%d %d",&a,&b);
	printf("Wartosc max:\n%d \nWartosc min:\n%d",max(a,b),min(a,b));
	
	return 0;
}
*/
