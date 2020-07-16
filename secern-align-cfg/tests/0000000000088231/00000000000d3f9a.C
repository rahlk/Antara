#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x;
        scanf("%lld",&n);
        x=n;
        int a[100],b[100],i,j,s=0,z;
    
          while(x>0)
          {
              x=x/10;
              s++;
          }
          x=n;
          i=s-1;
          j=s-1;
        while(x>0)
        {
            z=x%10;
            if(z==4)
            z--;
            a[i]=z;
            b[j]=1;
            x=x/10;
            i--;
            j--;
        }
        for(i=0;i<s;i++)
        printf("%d",a[i]);
        printf(" ");
        for(i=0;i<s;i++)
        printf("%d",b[i]);
        printf("\n");
    }
}