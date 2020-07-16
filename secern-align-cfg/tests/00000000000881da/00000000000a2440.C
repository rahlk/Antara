#include<stdio.h>
int main()
{
    int n=0,i,t,j,k,l,m;
    scanf("%d",&t);
    while(t--)
    {
    	n++;
        scanf("%d",&k);
        m=2*k-2;
        char s[m];
        scanf("%s",s);
        printf("Case #%d: ",n);
        for(i=0;i<m;i++)
        {
            if(s[i]=='S')
            printf("E");
            else
            printf("S");
        }
        printf("\n");
    }
}