#include<stdio.h>
void main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x;
        scanf("%lld",&n);
        int a[100],b[100],i,j,s=0,z;
            x=n;
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
        {   
            a[i]=3;
            b[j]=1;
        }
        else
        {
            a[i]=z;
            b[j]=0;
        }
            x=x/10;
            i--;
            j--;
        }
        printf("Case #%d: ",c);
        for(i=0;i<s;i++)
        printf("%d",a[i]);
        printf(" ");
        for(i=0;i<s;i++)
        { if(b[i]==0)
          continue;
         else
         {
            for(j=i;j<s;j++)
            printf("%d",b[j]);
          }
        break;
        }
        printf("\n");
        c++;
    }
}