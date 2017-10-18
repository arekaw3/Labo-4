#include <stdio.h>

int main()
{
	int a1 , a2 , b1 , b2 , n;
	int i , k;
	printf("Liczba nie moze byc wieksza niz: \n");
	scanf("%d",&n);
	printf("Podaj granice zbioru pierwszego: \n");
	scanf("%d %d",&a1 , &a2);
	printf("Podaj granice zbioru drogiego: \n");
	scanf("%d %d",&b1 , &b2);
	printf("Liczby calkowite, ktore naleza do iloczynu zbiorow <%d,%d> <%d,%d>: \n",a1 , a2 , b1 , b2);
	if(a1<=a2 && b1<=b2 && a1>0 && b1>0 && a2<n && b2<n)
	{
		for(i=a1;i<=a2;i++)
		{
			for(k=b1;k<=b2;k++)
			{
				if(i==k)
				printf("%d ",i);
			}
		}
	}
	else
	{
	printf("Blad");
	}
	return 0;
}
