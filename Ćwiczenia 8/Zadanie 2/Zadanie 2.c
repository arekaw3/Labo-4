#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
	char *napis=(char*)malloc(sizeof (char));
	fgets(napis,5,stdin);
	int n=atoi(napis);
	printf("%d\n",n);
	
	return 0;
}
