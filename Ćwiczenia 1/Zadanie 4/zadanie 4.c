#include <stdio.h>


int main()
{
	
    int a;
    int x;
    int b;
    
    printf("Podaj a:\n");
    scanf("%d",&a);
    printf("Podaj x:\n");
	scanf("%d",&x);
	printf("Podaj b:\n");
    scanf("%d",&b);
   
    double y=a*x+b;
    printf("Wartosc y wynosi: ");
    printf("%f",y);
    return 0;
}
