#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j;
    char p[3000],q[3000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%s",&n,p);
        for(j=0;j<(2*n-2);j++)
        {
            if(p[j]=='S')
                q[j]='E';
            else
                q[j]='S';
        }
        q[j]='\0';
        printf("Case #%d: %s %s\n",i+1,p,q);
    }

return 0;
}