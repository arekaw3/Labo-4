
#include <stdio.h>

int main()
{
    int a=9, b=7;
    int dodawanie;
	int odejmowanie;
	int mnozenie;
	int dzielenie;
	int modulo;
    dodawanie = a + b;
    odejmowanie = a - b;
    mnozenie = a*b;
    dzielenie = a/b;
    modulo = a%b;
    printf("Dodawanie: %d \n", dodawanie);
    printf("Odejmowanie: %d \n", odejmowanie);
    printf("Mnozenie: %d \n", mnozenie);
    printf("Dzielenie: %d \n", dzielenie);
    printf("Modulo: %d\n", modulo);
    
    return 0;
}
