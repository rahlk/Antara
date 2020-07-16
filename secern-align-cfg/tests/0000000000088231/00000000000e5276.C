#include<stdio.h>
int main()
{
    char ch[100]={'0'},ch1[100];
    gets(ch);
    int a,c=0,b=strlen(ch);
    for(int i=0;i<b;i++)
    {
        if(ch[i]=='4')
        {
            c++;
            if(c==1)a=i;
            ch[i]='2';
            ch1[i]='2';
        }
    }
    puts(ch);
    for(int i=a;i<b;i++)
    {
        if(ch1[i]!='2')ch1[i]='0';
        printf("%c",ch1[i]);
    }

    return 0;
}