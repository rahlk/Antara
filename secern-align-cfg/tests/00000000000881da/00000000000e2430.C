#include <stdio.h>
#include<string.h>
int main()
{

   int t,n,i,j,p1,p2,index;
   scanf("%d",&t);
   int ct=1;
   while(ct<=t)
   {
    scanf("%d",&n);
    int a[n][n],f[n][n];
    char s[2*n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                a[i][j]=0;
                f[i][j]=0;
            }
    }
    index=0;
    i=0;
    j=0;
    p1=0;
    p2=0;
    printf("Case #%d: ",ct);
    while(s[index])
    {
        if(a[i][j]==f[p1][p2])
        {
            if(s[index]=='E')
            {
                j++;
                p1++;
                a[i][j]=1;
                f[p1][p2]=1;
                printf("S");
            }
            else
            {
                i++;
                p2++;
                a[i][j]=1;
                f[p1][p2]=1;
                printf("E");
            }
        }
        index++;
    }
    printf("\n");
    ct++;
   }
    return 0;
}