#include <stdio.h>

double *kera5(double *b)
{
    free(b);
    b=NULL; // powinno byæ tak ale program bêdzie wy¿uca³ b³¹d
    
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

