#include <stdio.h>

double *kera5(double *b)
{
    free(b);
    b=NULL; // powinno by� tak ale program b�dzie wy�uca� b��d
    
    return b;
}



int main()
{

    double *b = malloc(sizeof(double *));
    *b=40;
    double *wynik1=kera5(b);
    wynik1==NULL?printf("\nA jest NULL"):printf("\nA nie jest NULLem");
    printf("\n%lf\n\n",*wynik1);
    
    return 0;
}

