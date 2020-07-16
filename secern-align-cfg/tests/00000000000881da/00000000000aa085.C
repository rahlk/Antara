#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<t+1;k++)
    {
        int n,i=0,a=0,b=0,c=0;
        char s[50010];
        scanf("%d %s",&n,s);
        printf("Case #%d: ",k);
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='S')
            {
                printf("E");
            }
            else
            {
                printf("S");
            }
        }
        printf("\n");
    }
}