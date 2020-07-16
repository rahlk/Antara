#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    int num=0;
    scanf("%d",&t);
    while(t--)
    {
        int i;
        num++;
        char str[110],strb[110];
        int ind[110];
        int a=0;
        scanf("%s",str);
        int len=strlen(str);
        for (i=0;i<len;i++)
        {
            if (str[i]=='4')
            {
                str[i]='3';
                ind[a]=i;
                a++;
            }
        }
        int len2=len-ind[0];
        for (i=0;i<a;i++)
        {
            ind[i]=ind[i]-ind[0];
        }
        for (i=0;i<len2;i++)
        {
            strb[i]='0';
        }
        for (i=0;i<a;i++)
        {
            strb[ind[i]]='1';
        }
        strb[len2]='\0';
        printf("Case #%d: %s %s\n",num,str,strb);
    }
    return 0;
}
