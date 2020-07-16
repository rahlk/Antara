#include<stdio.h>
#include<string.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=1;z<=t;z++)
    {
        printf("Case #%d: ",z);
    char s[101],s1[101],s2[101];
    scanf("%s",s);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        s1[i]='\0';
        s2[i]='\0';
        if(s[i]=='0')
        {
            s1[i]='0';
            s2[i]='0';
        }
        else if(s[i]=='1')
        {
            s1[i]='0';
            s2[i]='1';
        }
        else if(s[i]=='2')
        {
            s1[i]='1';
            s2[i]='1';
        }
        else if(s[i]=='3')
        {
            s1[i]='1';
            s2[i]='2';
        }
        else if(s[i]=='4')
        {
            s1[i]='2';
            s2[i]='2';
        }
        else if(s[i]=='5')
        {
            s1[i]='2';
            s2[i]='3';
        }
        else if(s[i]=='6')
        {
            s1[i]='3';
            s2[i]='3';
        }
        else if(s[i]=='7')
        {
            s1[i]='2';
            s2[i]='5';
        }
        else if(s[i]=='8')
        {
            s1[i]='3';
            s2[i]='5';
        }
        else if(s[i]=='9')
        {
            s1[i]='3';
            s2[i]='6';
        }
    }
    s1[i]='\0',s2[i]='\0';
    printf("%s %s\n",s1,s2);
    }
    return 0;
}