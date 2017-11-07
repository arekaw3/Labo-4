#include <stdio.h>

int main()
{
    int x1,y1;
    int x2,y2;
    int p;
    printf("Podaj wspolrzedne 1 pkt:\n");
    scanf("%d %d",&x1,&y1);
    printf("Podaj wspolrzedne 2 pkt:\n");
    scanf("%d %d",&x2,&y2);
    
    p=abs((x2 - x1)) * abs((y1 - y2));
    
    printf("Pole = %d",p);
    
    return 0;
}
