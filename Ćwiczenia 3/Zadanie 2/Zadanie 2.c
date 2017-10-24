#include <stdio.h>

int dziel(int a)
{
    int i;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    for(i = 1; i < a; i++)
    {
        if(a%i == 0)
        {
            printf("%d\n", i);
        }
    }
	return i;
}

int main()
{
	printf("%d",dziel(0));
	
	return 0;
}
