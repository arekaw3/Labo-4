#include<stdio.h>

int main()
{
    char a , b , c ,d;
    
    scanf("%c %c %c %c",&a,&b,&c,&d);

    printf("%c %c %c %c \n",a,b,c,d);
    printf("%c %c %c %c \n",a,b,d,c);
    printf("%c %c %c %c \n",a,c,d,b);
    printf("%c %c %c %c \n",a,c,b,d);
    printf("%c %c %c %c \n",a,d,b,c);
    printf("%c %c %c %c \n",a,d,c,b);
    
    printf("%c %c %c %c \n",b,a,c,d);
    printf("%c %c %c %c \n",b,a,d,c);
    printf("%c %c %c %c \n",b,c,a,d);
    printf("%c %c %c %c \n",b,c,d,a);
    printf("%c %c %c %c \n",b,d,a,c);
    printf("%c %c %c %c \n",b,d,c,a);
    
    printf("%c %c %c %c \n",c,a,b,d);
    printf("%c %c %c %c \n",c,a,d,b);
    printf("%c %c %c %c \n",c,b,a,d);
    printf("%c %c %c %c \n",c,b,d,a);
    printf("%c %c %c %c \n",c,d,a,b);
    printf("%c %c %c %c \n",c,d,b,a);
    
    printf("%c %c %c %c \n",d,a,c,b);
    printf("%c %c %c %c \n",d,a,b,c);
    printf("%c %c %c %c \n",d,b,a,c);
    printf("%c %c %c %c \n",d,b,c,a);
    printf("%c %c %c %c \n",d,c,b,a);
    printf("%c %c %c %c \n",d,c,a,b);
    return 0;
}

