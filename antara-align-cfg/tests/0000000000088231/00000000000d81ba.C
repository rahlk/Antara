#include <stdio.h>

int main()
{
    int input;
    int z,i;
    scanf("%d",&z);
    int copy,d,a,b;
    for(i=1;i<=z;i++)
    {
    scanf("%d",&input);
    d=1;
    copy=input;
    b=input;
    while(copy!=0)
    {
        a=copy%10;
        if(a==4)
        input=input-d;
        d=d*10;
        copy=copy/10;
    }
    b=b-input;
    printf("Case #%d: %d %d",i,input,b);
    }

    return 0;
}
