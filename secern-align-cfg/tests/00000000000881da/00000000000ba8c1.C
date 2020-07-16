#include<stdio.h>
#include<string.h>
int main()
{
    int t,v=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[2*n-1];
        scanf("%s",a);
        int b[n][n],i,j,k=0,l=0;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        b[i][j]=0;
        b[0][0]=1;
        for(i=0;i<strlen(a);i++)
        {
        if(a[i]=='E')
        {
            b[k][l+1]=1;
            l++;
            
        }
        else
        {
            b[k+1][l]=1;
            k++;
        }
        
        }
     long long int d[100000],f[100000],g[100000],z=0;
        i=0;
        
        d[0]=1;
        f[0]=0;
        g[0]=0;
        while(1)
        {
            if(f[z]==n-1&&g[z]==n-1)
            break;
            
            if(g[z]+1<n&&b[f[z]][g[z]]+b[f[z]][g[z]+1]<=1)
            {
                i++;
                if(z==0)
                d[i]=1;
                else
                d[i]=2*d[z]+1;
                f[i]=f[z];
                g[i]=g[z]+1;
                
            }
             if(f[z]+1<n&&b[f[z]][g[z]]+b[f[z]+1][g[z]]<=1)
            {
                i++;
                if(z==0)
                d[i]=2;
                else
                d[i]=2*d[z]+2;
                f[i]=f[z]+1;
                g[i]=g[z];
            }
            z++;
        }
      long long   int num=d[z];
        char c[100000];
        i=0;
        while(num>0)
        {
            if(num%2==0)
            {
                c[i]='S';
                num=(num-2)/2;
            }
            else
            {
                c[i]='E';
                num=(num-1)/2;
            }
            i++;
        }
        printf("Case #%d: ",v);
        v++;
        while(i--)
        printf("%c",c[i]);
        printf("\n");
    }
    return 0;
}