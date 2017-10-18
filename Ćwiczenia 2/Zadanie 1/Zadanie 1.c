#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);
    
    if(a > b && a> c)
    {
        printf("Pierwsza liczba jest najwieksza");
    }
    else if(c > a && c > b)
    {
        printf("Druga liczba jest najwieksza");
    }
    else if(b > c && b > a)
    {
        printf("Trzecia liczba jest najwieksza");
    }
    return 0;
}
