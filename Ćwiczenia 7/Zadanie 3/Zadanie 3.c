#include <stdio.h>


int *kera3(int *i, int *j)
{
    return (i>j)?i:j;
}


int main()
{
    int i=1;
    int j=2;
    int *wynik;

    wynik=kera3(&i,&j);
    printf("%d\n",*wynik);
    

    return 0;
}

