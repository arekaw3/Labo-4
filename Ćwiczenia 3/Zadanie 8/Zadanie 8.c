#include <stdio.h>
 
 int sil(int s)
 {
 	if(s==0)
 	{
 	return 0;
	}
	else if(s==1)
 	{
 	return 1;
	}
	else
	{
	return s*sil(s-1);
	} 	
 }
 
 int main()
{
	int s;
	scanf("%d",&s);
	printf("%d",sil(s));
	
	return 0;
}
