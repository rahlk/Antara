#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char a[101],b[101];
        scanf("%s",a);
        int j,len;
        len=strlen(a);
        printf("Case #%d: ",i+1);
        for(j=0;j<len;j++)
        {
            if(a[j]=='4')
            {
                a[j]='3';
                /*printf("%s 1",a);
                for(int k=j;k<len;k++)
                {
                    printf("0");
                }*/
                b[j]='1';
            }
            else
            {
                b[j]='0';
            }
        }
        printf("%s ",a);
        int flag;
        for(j=0;j<len;j++)
        {
            if(b[j]=='1')
            {
                flag=j;
                break;
            }
        }
        for(j=flag;j<len;j++)
        {
            printf("%c",b[j]);
        }
        printf("\n");
    }
    return 0;
}