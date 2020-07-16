#include<stdio.h>
int main()
{
    int num,i,j,n;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&n);
        char c[2*n-2];
        scanf("%s",c);
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]=='E')
            c[j]='S';
            else if(c[j]=='S')
            c[j]='E';
        }
        printf("Case #%d : %s",i,c);
    }
}