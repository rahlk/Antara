#include<stdio.h>
int main()
{
    int n,i,j,a,b,c,d,g,h,k,l,o;
    int count,sum,countnumber,sumnumber;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    { o=0;
        for(j=n;j>=1;j--)

    {
       a=i;
       g=i;
       b=j;
       h=j;
       k=i;
       l=j;
       sum=0;
       count=0;
       sumnumber=0;
       countnumber=0;

       while(a>0)
       {
           countnumber=countnumber+1;
           a=a/10;
       }
       while(b>0)
       {
           sumnumber=sumnumber+1;
           b=b/10;
       }
       while(k>0)
       {
           c=k%10;
           if(c!=4)
           {
               count=count+1;
           }
           k=k/10;
       }
       while(l>0)
       {
           d=l%10;
           if(d!=4)
           {
               sum=sum+1;
           }
           l=l/10;
       }
       if(sum==sumnumber&&count==countnumber)
       { if((g+h)==n)
           {printf("%d %d",g,h);
            o=o+1;
           break;}
       }


    }if(o>0)
    {
        break;
    }

    }
}
