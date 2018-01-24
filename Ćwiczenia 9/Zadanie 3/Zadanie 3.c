#include <stdio.h>
#include <stdlib.h>
void fun()
{
	int i,j;
	int n,m;
	int a,b;
	scanf("%d %d",&n,&m);
	int **tab = malloc (n * sizeof(double **));
	
	for( ; i < n; i++)
	{
		tab[i] = malloc(m* sizeof(double *));
	}

	for(i = 0; i < m;i++)
	{
		int j=0;
		for( ; j < m; j++)
		{
			tab[i][j] = (i+1)*(j+1);
		}
	}
	for(i = 0; i < n;i++)
	{
		int j = 0;
		for( ; j < m; j++)
		{
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < n; i++)
	{
		free (tab[i]);
	}	
	free(tab);
}

int main()
 {	
 	fun();
	return 0;
}
