#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,temp,i,j,k,n,k1,l;
    scanf("%d\n",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d\t%d\n",&n,&k1);
        int b[n];
        for(j=0;j<n;j++)
          scanf("%d\t",&b[j]);
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j-1;k++)
            {
                if(b[k]>b[k+1])
                {
                    temp=b[k];
                    b[k]=b[k+1];
                    b[k+1]=temp;
                }
            }
        }
        l=(n+k1)/2;
        a[i]=b[l];
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}