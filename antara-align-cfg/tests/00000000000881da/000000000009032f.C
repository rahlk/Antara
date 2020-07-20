#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int t1=1;t1<=t;t1++)
    {
        int n;
        scanf("%d",&n);
        int k=2*n-2;
        char str[k],res[k];
        scanf("%s",str);
        int i=0;
        while(str[i]!='\0')
        {
            if(str[i]=='E')
                res[i]='S';
            else
                res[i]='E';
            i++;
        }
        res[i]='\0';
        printf("Case #%d: %s\n",t1,res);
    }
}