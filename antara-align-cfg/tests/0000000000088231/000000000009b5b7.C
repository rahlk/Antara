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
        int n=0;
        if(i+j==v)
        {
            char s1[100];
            char s2[100];
            sprintf(s1,"%d",i);
            sprintf(s2,"%d",j);
            int len1=strlen(s1);
            int len2=strlen(s2);
            for(int m=0;m<len1;m++)
            {
                if(s1[m]=='4')
                {
                    n=1;
                    break;
                }
            }
            for(int m=0;m<len2;m++)
            {
                if(s2[m]=='4')
                {
                    n=1;
                    break;
                }
            }
            if(n==1)
            printf("Case #%d: %d %d\n",k+1,i,j);
        }
    }
    }
    else
    continue;
}
    
}