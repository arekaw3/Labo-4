#include <stdio.h>

int qwert(int q)
{
    if(q==0) 
	return 1;
    else if(q%2==0)
    {
        if(q==1)
        {
            return 2;
        }
        else
        {
            return ((qwert(q-1)) * 2) - 5;
        }
    }
    else
    {
        if(q==1)
        {
            return 1;
        }
        else
        {
            return (qwert(q-1)) * 2;
        }
    }
}

int main()
{
	int q;
	scanf("%d",&q);y
	printf("%d",qwert(q));
	
	return 0;
}
