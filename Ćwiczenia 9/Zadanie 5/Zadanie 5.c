#include <stdio.h>
#include <stdlib.h>
void fun()
{
	int i,j;
	int n,m;
	int suma=0;
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
			tab[i][j] =i+j;
			suma+=tab[i][j];
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
	
	printf("\n %d",suma);
	
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
