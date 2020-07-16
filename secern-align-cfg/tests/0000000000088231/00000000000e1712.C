#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
 {
    int n,i,j,d,k,c1=0,c2=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        j=i;
        k=n-i;
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
    {a=j;b=k;
    break;    
    }
    }
printf("Case %d : %d  %d",t,a,b);
}
return 0;
}
    
