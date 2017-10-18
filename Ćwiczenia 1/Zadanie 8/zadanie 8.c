#include <stdio.h>

int main()
{
    float a;
    float b;
    float h;
    
    printf("Podaj dlugosc podstawy: ");
    scanf("%f",&a);
    printf("Podaj szerokosc podstawy: ");
    scanf("%f",&b);
    printf("Podaj wysokosc: ");
    scanf("%f",&h);
    printf("Obietosc prostopadloscianu wynosi: ");
    double obietosc = 1.0*a*b*h;
    printf("%f",obietosc);
	return 0;
}
