#include<stdio.h>
int main()
{
    int t,n,c,i,j,k=0;
    scanf("%d",&t);
    while(k<t)
    {
        k++;
        scanf("%d",&n);
        j=(n-1)*2;
        char p[j];
        char q[j];
        scanf("%s",&p);
        for(i=0;i<j;i++)
        {
            if(p[i]=='S')
            q[i]='E';
            else
            q[i]='S';
        }
        printf("Case #%d: %s\n",k,q);
    }
}