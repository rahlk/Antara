#include<stdio.h>
#include<string.h>
int main()
{
    int cases,i,lenstr[100],j,dim;
    char str[100][50000];
    scanf("%d",&cases);
    for(i=0;i<cases;i++)
    {
        scanf("%d",&dim);
        lenstr[i]=2*dim-2;
        scanf("%s",str[i]);
    }
    for(i=0;i<cases;i++)
    {
        for(j=0;j<lenstr[i];j++)
        {
            if(str[i][j]=='S')
            str[i][j]='E';
            else
            str[i][j]='S';
        }
        printf("Case #%d: %s\n",i+1,str[i]);
    }
}