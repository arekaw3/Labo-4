#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a,const void *b)
{
	int *wska=(int*)a;
	int *wskb=(int*)b;
	
	return *wska>*wskb?1:*wska==*wskb?0:-1;
}

int main()
{
	srand(time(NULL));
	int *tab=malloc(10*sizeof(int*));
	int i;
	for(i=0;i=10;i++)
	{
		tab[i]=rand()%10+1;
	}
	for(i=0;i=10;i++)
	{
		printf("\n%d",tab[i]);
	}
	
	qsort(tab,10,sizeof(int),compare);
	printf("\n\n\n");
	for(i=0;i=10;i++)
	{
		printf("\n%d",tab[i]);
	}
	
	return 0;
}
