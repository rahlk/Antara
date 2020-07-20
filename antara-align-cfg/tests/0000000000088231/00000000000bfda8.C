#include<stdio.h>
void main()
{
    int T,i=1,flag=0;
    unsigned long int n,a,b,ad,bd,ar,br;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%lu",&n);
        a=n-1;
        b=1;
        ar=br=0;
        while(1)
        {
            ad=a;
            bd=b;
            ar=ad%10;
            br=bd%10;
            while(ad>0 || bd>0)
            {
                if(ar==4 || br==4)
                {
                    flag=1;
                    break;
                }
                else
                {
                    ad=ad/10;
                    bd=bd/10;
                    ar=ad%10;
                    br=bd%10;
                }
            }
            if(flag==0)
            {
                printf("Case #%d: %lu %lu \n",i,a,b);
                break;
            }
            else
            {
                a=a-1;
                b=b+1;
            }
            flag=0;
        }
        i=i+1;
    }
}