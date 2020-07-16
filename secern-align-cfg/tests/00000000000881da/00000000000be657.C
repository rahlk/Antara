#include<stdio.h>

int main()
{
    int x=1,t,n;
    char p[50000],y[50000];
    scanf("%d",&t);
    while(x<=t)
    {
        int i=0;
        scanf("%d",&n);
        scanf("%s",p);
        while(p[i]!='\0')
        {
            if(p[i]=='E')
            y[i]='S';
            if(p[i]=='S')
            y[i]='E';
            i++;
        }
        y[i]='\0';
        printf("Case #%d: %s\n",x,y);
        x++;
    }
    return 0;
}