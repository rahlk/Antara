#include<stdio.h>
int main()
{
    int num,i,j,n;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&n);
        char c[10];
        scanf("%s",c);
        printf("Case #%d: ",i);
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]=='E')printf("S");
            else printf("E");
        }
    }
}