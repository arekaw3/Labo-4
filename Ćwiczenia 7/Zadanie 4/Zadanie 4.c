#include <stdio.h>
#include <stdlib.h> 


float *kera4()
{
    float *a=malloc(sizeof(float *));

    return a;
}


int main()
{
    float *a=kera4();

    return 0;
}

