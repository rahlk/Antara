#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int q=1;q<=t;q++)
    {
        char num[100];
        scanf("%s",num);
        int len=strlen(num);
        char new2[len+1];
        for(int i=0;i<len;i++)
        {
            if(num[i]=='4')
            {
                new2[i]='1';
            }
            else
                new2[i]='0';
        }
        printf("Case #%d: ",q);
        for(int i=0;i<len;i++)
        {
            if(num[i]=='4')
            {
                printf("3");
            }
            else
                printf("%c",num[i]);
        }
        printf(" ");
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(new2[i]=='0')
            {
                if(flag==1)
                {
                    printf("0");
                }
            }
            else{
                flag=1;
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}