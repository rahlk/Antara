#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    int x=1;
    while(x<=t)
    {
        long int n;
        scanf("%ld",&n);
        int i;
        printf("Case #%d :",x);
        long int a=0,po=1,b=0,j;
        for(i=1;n!=0;i++)
        {
            j=n%10;
            n=n/10;
            if(j==4)
            {
                a=a+3*po;
                b=b+po;
            }
            else
            {
                a=a+j*po;
            }
            po=po*10;
        }
        printf(" %ld %ld\n",a,b);
        x++;
    }
}