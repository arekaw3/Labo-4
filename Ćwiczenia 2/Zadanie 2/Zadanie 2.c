#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float d;
    printf("Podaj a, b, c \n");
    scanf("%f %f %f",&a,&b,&c);
   
    if(a!=0)
    {
        d=b*b-4*a*c;
        if(d==0)
        {   float x=(-1.0*b)/2*a;
            printf("wynik =%f",x);
        }
        else if(d>0)
        {
            float pierwiastek=sqrt(d);
            float x1,x2;
            x1=(-1.0*b-pierwiastek)/(2.0*a);
            x2=(-1.0*b+pierwiastek)/(2.0*a);
            printf("x1=%f x2=%f",x1,x2);
        }
        else
        {
            printf("Nie jest ma pierwiastkow rzeczywistych \n");
        }
        

    }
    else printf("Nie jest funkcja kwadratowa \n");

    return 0;
}

