#include<stdio.h>
#include<math.h>
int main()
{
    int a=0;
    int b=0;
    int i=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int c=0;
        int d=0;
        int tmp=1;
        scanf("%d",&b);
        while(b!=0)
        {
            if(b%10==4)
            {
                c=c+3*tmp;
                d=d+tmp;
                
            }
            else
            {
                c=c;
                d=d+(b%10)*tmp;
            }
            tmp=tmp*10;
            b=b/10;
        }
        printf("Case #%d: %d %d\n",i+1,c,d);
    }
    return 0;
}