#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	div_t divres;
	divres= div(38,5);
	printf("%d\n",divres.quot);
	
	return 0;
}
