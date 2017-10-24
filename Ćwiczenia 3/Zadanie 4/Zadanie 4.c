#include <stdio.h>

int kwad(int a)
{
	int kwad, i;
	for(i=1; (i+1)<a; i++)
	{
		if(i%2!=0)
		{
		kwad = i*i;
		printf("%d ",kwad);
		}
	}
	return kwad;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n", kwad(a));
    return 0;
}
