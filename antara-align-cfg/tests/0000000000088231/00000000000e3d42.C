#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j; 
    scanf("%d",&t);
    for(i=1;i<=t;++i)
    {
        char n[1000000000],a[1000000000],b[1000000000]; 
        scanf("%s",n);
        for(j=0;j!=strlen(n);j++)
        {
            if(n[j]=='4') 
            {
                a[j]=n[j]/2;
                b[j]=n[j]-a[j];
            }
            else 
            {
                a[j]=n[j];
                b[j]=n[j]-a[j];
            }
        }
        printf("Case #%d:%s %s\n",i,a,b);
    }
    return 0;
}