#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
	char *napis=(char*)malloc(sizeof (char));
	fgets(napis,222,stdin);
	long int n=atol(napis);
	printf("%ld\n",n);
	
	return 0;
}
