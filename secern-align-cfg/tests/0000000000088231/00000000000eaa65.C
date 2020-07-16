#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int a,i,b,c,d,e;
    scanf("%d",a);
    printf("\n");
    for(i=1;i<=a;i++)
    {
        scanf("%d",b);
        c=rand()%b;
        d=c-1;
        e=b-d;
        printf("case #%d: %d %d",i,d,e);
    }
    
    
}