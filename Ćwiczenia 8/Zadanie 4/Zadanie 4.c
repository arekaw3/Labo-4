#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
	char *napis=(char*)malloc(sizeof (char));
	fgets(napis,20,stdin);
	long long n=strtol(napis,NULL,0);
	printf("%lld\n",n);
	
	return 0;
}
