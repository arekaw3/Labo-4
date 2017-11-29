#include <stdio.h>


int kera(int *i, int *j)
{
    return (*i>*j)?*i:*j;
}



int main()
{
    int i=1;
    int j=2;
    
    printf("%d\n",kera(&i,&j));

    return 0;
}

