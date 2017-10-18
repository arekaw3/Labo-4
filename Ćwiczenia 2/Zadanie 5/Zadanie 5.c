#include <stdio.h>
#include <math.h>

int main()
{
    int a = 2;
    int b,c;
    while (a !=0)
    {
    printf("Ktore dzialanie chcesz wykonac? \n dzielenie= 4 \n mnozenie= 3 \n odejmowanie= 2 \n dodawanie= 1 \n zakonczenie programu= 0 \n");
    
        scanf("%d",&a);

        switch(a)
    {
        case 0:
            break;
        case 1:
            printf("Podaj dwie liczby \n");
            scanf("%d %d",&c ,&b);
			printf("wynik = %d \n",c+b);
            break;
        case 3:
            printf("Podaj dwie liczby \n");
            scanf("%d %d",&c ,&b);
            printf("wynik = %d \n",c*b);
            break;
        case 2:
            printf("Podaj dwie liczby \n");
            scanf("%d %d",&c ,&b);

            printf("wynik = %d \n",c-b);
            break;
        case 4:
            printf("Podaj dwie liczby \n");
            scanf("%d %d",&c ,&b);

            printf("wynik = %d \n",c/b);
            break;
    }
 }
    return 0;
}

