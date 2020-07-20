#include<stdio.h>
int main()
{
    int t,i=0,n;
    scanf("%d",&t);
    while(i!=t)
    {
        scanf("%d",&n);
        char s[2*n-2];
        scanf("%s",s);
        for(int i=0;i<2*n-2;i++)
        {
            if(s[i]=='S')
                s[i]='E';
            else
                s[i]='S';
        }
        printf("Case #%d: %s\n",(i+1),s);
        i++;
    }
}