#include <stdio.h>


int modul(int x, int y)
{
    return (abs(x) + abs(y))/2.0;
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
    printf("%d", modul(x,y));
    return 0;
}
