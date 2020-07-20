#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        char c[20];
        scanf("%s",c);
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]=='E')printf("S");
            else printf("E");
        }
    }
}