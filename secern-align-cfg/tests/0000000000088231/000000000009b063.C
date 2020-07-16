#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
int t,i,j,f=0;
char a[100];
scanf("%d",&t);
for(int k=0;k<t;k++)
{
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
         f=0;
        if(a[i]=='4')
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
    int v=atoi(a);
    for(i=1,j=v-1;i<v,j>0;i++,j--)
    {
        if(i+j==v)
        {
           
            printf("%d %d\n",i,j);
        }
    }
    }
    else
    continue;
}
    
}