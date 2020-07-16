
#include<stdio.h>
void main()
{
    int t,a[10],i,e=0,k,j,d=0,temp=0,b[10],m,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=0;k<t;k++)
    {
    for(i=1;i<a[k]/2;i++)
    {
        d=i;
        j=a[k]-i;
        while(i>0)
        {
            m=i%10;
            if(m==4)
            {temp=1;
                break;}
            i=i/10;
        }
        while(j>0)
        {
            n=j%10;
            if(n==4)
            {
                temp=1;
                break;}
            j=j/10;
        }
        if(temp==0)
        {
         b[e]=d;
         ++e;
         break;
        }
    }
    }
    for(i=0;i<t;i++)
    {
        printf("Case #%d: %d %d \n",i+1,b[i],a[i]-b[i]);
    }

}