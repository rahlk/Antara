#include<stdio.h>
#include<string.h>
int b[5000][5000];
int c[100000],x;
int cal(int i,int j,int n)
{
        if(i>=n||j>=n)
        return 0;
        else if(i==n-1&&j==n-1)
        return 1;
        else
        {
            if(b[i][j]+b[i+1][j]<=1&&cal(i+1,j,n)==1)
            {
                c[x]=1;
                x++;
                return 1;
            }
            
          else  if(b[i][j]+b[i][j+1]<=1&&cal(i,j+1,n)==1)
            {
             c[x]=0;
             x++;
                return 1;
            }
            else
            return 0;
        }
}
int main()
{
    int t,q=1;
    scanf("%d",&t);
    while(t--)
    {
        x=0;
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        int i,j,k=0,l=0;
        for(i=0;i<5000;i++)
        for(j=0;j<5000;j++)
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
        
        cal(0,0,n);
        printf("Case #%d: ",q);
        q++;
        for(i=x-1;i>=0;i--)
        {
        if(c[i]==1)
        printf("S");
        else
        printf("E");
        }
        printf("\n");
        
    }
    return 0;
}