#include <stdio.h>
void main()
{    int i,c=0,n,d,s=0,T,n1;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);s=0;c=0;n1=n;
        do
        {
            d=n%10;
            n=n/10;
            if(d==4)
            s=s+(int)pow(10,c)*3;
            c++;
        }while(n!=0);
        n1=n1-s;
        printf("Case #%d: %d %d\n",(i+1),n1,s);
    }
        
    
}