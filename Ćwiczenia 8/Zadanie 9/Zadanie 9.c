#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char napis[]="Ala ma kota ";
	char napis2[]="bo sierotka ma rysia";
	char napis3[60];
	strcpy(napis3,napis);
	strcat(napis3,napis2);
	fputs(napis3,stdout);

	return 0;
}
