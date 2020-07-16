#include <stdio.h>
#include <stdlib.h>

int isprime(int n)
{
    int i,k=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            k++;
    }
    if(k==0)
        return 1;
    else
        return 0;
}

void sort(int c[],int n)
{
    int round,i,temp;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-1-round;i++)
        {
            if(c[i]>c[i+1])
            {
                temp=c[i];
                c[i]=c[i+1];
                c[i+1]=temp;
            }
        }
    }
}

int main()
{
    int t,r=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,l,i,x=0,y;
        scanf("%d %d",&n,&l);
        int a[l],b[l+1],c[l+1];
        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=n;i>1;i--)
        {
            x=isprime(i);
            y=a[l-1]%i;
            if(x==1&&y==0)
            {
                b[l]=i;
                c[l]=b[l];
                break;
            }
        }
        for(i=l-1;i>=0;i--)
        {
            b[i]=a[i]/b[i+1];
            c[i]=b[i];
        }
        sort(c,l+1);
        int j,k=1,d[26];
        d[0]=c[0];
        for(i=1;i<l+1;i++)
        {
            for(j=0;j<k;j++)
            {
                if(c[i]==d[j])
                    break;
                else if(j==k-1)
                {
                    d[k]=c[i];
                    k++;
                }
            }
        }
        int A='A';
        printf("Case #%d: ",r);
        r++;
       for(j=0;j<l+1;j++)

       {
           for(i=0;i<26;i++)
           {
               if(b[j]==d[i])
               {
                   printf("%c",A+i);
                   break;
               }
           }
       }
       printf("\n");

    }
}
