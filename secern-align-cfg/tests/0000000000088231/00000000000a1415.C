#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,a[10],n=0,i=0,j,r,x,y;
    scanf("%d",&t);
    while(t<0)
    {
        scanf("%d",a[i++]);
        n++;
    }
    for(i=0;i<n;i++)
    {
        j=i;
        x=0;
        y=0;
        rem:
            r=a[i]%10;
            //a[i]=a[i]/10;
            //if(a[i]==0)
            //goto next;
            if(r==4)
            {
                x=x+((a[i]-1)*pow(10,j));
                y=y+pow(10,j);
            }
            j++;
            a[i]=a[i]/10;
            if(a[i]==0)
                goto next;
            goto rem;
        next:
            printf("Case #%d: %d %d",i+1,x,y);
    }
    return 0;
}