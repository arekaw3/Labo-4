#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
	char *napis=(char*)malloc(sizeof (char));
	fgets(napis,5,stdin);
	double n=atof(napis);
	printf("%f\n",n);
	
	return 0;
}
