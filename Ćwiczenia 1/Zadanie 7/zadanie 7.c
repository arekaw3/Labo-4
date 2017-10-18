#include <stdio.h>


int main()
{
    double a;
    double b;
    double c;
   
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
    double srednia=3.0/(1.0/a+1.0/b+1.0/c);
    printf("%f",srednia);
    return 0;
}
