#include <stdio.h>


int main()
{

    int a;
    int h;
    printf("Podaj dlugosc podstawy: ");
    scanf("%d",&a);
    printf("Podaj wysokosc: ");
    scanf("%d",&h);
    printf("Pole trujkata wynosi: ");
    double pole=1.0*(a*h)/2;
    printf("%f",pole);
    return 0;
}
