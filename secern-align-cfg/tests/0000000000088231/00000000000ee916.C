
/**
 *  *    author:  SpiderX
 *   **/

#include <stdio.h>
#include <string.h>

int main(void)
{

    int t,l,i;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        char s1[101];
        scanf("%s",s);
        strcpy(s1,s);
        l = strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='4')
            {
                s[i]='3';
                s1[i]='1';
            }
            else
            {
                s1[i]='0';
            } 
        }
        printf("%s ",s);
        for ( i = 0; i < l && s1[i] == '0'; i++);
        if (s1[i] == '\0')
        printf("0");
        else
        for (;s1[i];i++)
        printf("%c", s1[i]);
        printf("\n");
    }
    return (0);
}