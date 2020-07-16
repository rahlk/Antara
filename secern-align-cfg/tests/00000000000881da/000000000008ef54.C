#include<stdio.h>
#include<string.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=1;z<=t;z++)
    {
        printf("Case #%d: ",z);
        int n,i;
        scanf("%d",&n);
        char s[2*n],s1[2*n];
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            s1[i]='\0';
            if(s[i]=='E')
            s1[i]='S';
            else
            s1[i]='E';
        }
        s1[i]='\0';
        printf("%s\n",s1);
    }
    return 0;
}