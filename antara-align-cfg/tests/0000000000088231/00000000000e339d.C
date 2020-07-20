#include<stdio.h>
int main()
{
int t,y;
scanf("%d",&t);
for(y=1;y<=t;y++)
 {
    int n,i,j,d,k,c1=0,c2=0,a,b,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i;
        k=n-i;
        p=j;
        q=k;
        c1=0;c2=0;
        while(j!=0)
        {
            d=j%10;
            if(d==4)
            c1++;
            j=j/10;
        }
        while(k!=0)
        {
            d=k%10;
            if(d==4)
            c2++;
            k=k/10;
        }
    if(c1==0 && c2==0)
    {a=p;b=q;
    break;    
    }
    }
printf("Case #%d: %d  %d\n",y,a,b);
}
return 0;
}
    
