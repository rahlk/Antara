#include<stdio.h>
#include<string.h>
int main()
{
    int T,number=1;
    scanf("%d",&T);
    while(T--)
    {
        char p[50002],path[50002];
        int r=0,c=0,rr=0,cc=0,n,l,t,i;
        int rcount=0,ccount=0;
        scanf("%d",&n);
        scanf("%s",p);
        l = strlen(p);
        p[l] = 0;
        path[l]=0;
        t = 2*n-2;
        for(i=0;i<t;i++)
        {
        if(p[i]=='E')path[i]='S';
        else path[i]='E';
        }
        printf("Case #%d: %s\n",number,path);
        number++;
    }
    return 0;
}