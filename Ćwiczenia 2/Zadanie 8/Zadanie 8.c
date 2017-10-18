#include <stdio.h>

int main()
{
    float a, b;
    
    printf("Podaj a i b: \n");
    scanf("%f %f", &a, &b);
    
    if(a>0 && b>0)
    {
        printf("Cwiartka 1, 2 ,3\n");
    }
    else if(a>0 && b<0)
    {
        printf("Cwiartka 1, 3, 4\n");
    }
    else if(a<0 && b>0)
    {
        printf("Cwiartka 1, 2, 4\n");
    }
    else if(a<0 && b<0)
    {
        printf("Cwiartka 2, 3, 4\n");
    }
    else if(a==0 && b>0)
    {
        printf("Cwiartka 1, 2\n");
    }
    else if(a==0 && b<0)
    {
        printf("Cwiartka 3, 4\n");
    }
    else if(b==0 && a>0)
    {
        printf("Cwiartka 1, 3\n");
    }
    else if(b==0 && a<0)
    {
        printf("Cwiartka 2, 4\n");
    }
    else if(b==0 && a==0)
    {
        printf("Cwiartka 1, 3 dla x>0 \n lub \n Cwiartka 2, 4 dla x<0");
    }
    
    
    return 0;
}
