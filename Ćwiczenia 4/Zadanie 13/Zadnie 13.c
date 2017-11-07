#include <stdio.h>

void f()
{
    int n;
    int sum=0;
    while(sum<100)
        {
            scanf("%d", &n);
            sum = sum + n;
		}
	 if(sum>100)
            {
            int k;
            k=sum-100;
            printf("%d",k);
        	}
}

int main()
{
    f();
    return 0;
}
