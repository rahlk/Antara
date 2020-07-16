#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[20],a[20];
        a[0]='\0'  ;
        int k=0,i;
        a[0]='0';
        scanf("%s",s);
        strcpy(a,s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='4')
            {
                s[i]='3';
                a[i]='1';
            }
            else
            {
                a[i]='0';
            }
        }
        printf("%s ",s); 
        for(i=0;a[i]!='\0';i++)
            if(a[i]!='0')
                break;
        for(;a[i]!='\0';i++)
            printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}