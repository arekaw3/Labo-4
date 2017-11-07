//#include <stdio.h>

float j(float cp, float pwp, float kr)
{
    int i=0;
    while(cp < kr)
    {
        cp=cp*(pwp/100)+cp;
        ++i;
    }
    return i;
}
/*
int main()
{
	float cp,pwp,kr;
	scanf("%f %f %f",&cp,&pwp,&kr);
    printf("%f",j(cp,pwp,kr));
    
    return 0;
}
*/
