#include<stdio.h>
int main()
{
    int t,a=1;
    char n[50000],i;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        scanf("%s",n);
        char s1[99998],s2[99998]={0};
        scanf("%s",s1);
        while(s1[i]!='\0')
        {
            if(s1[i]=='E')
            s2[i]='S';
            else
            s2[i]='E';
            i++;
        }
        printf("Case #%d: %s\n",a,s2);
        a++;
    }
}