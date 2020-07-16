#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void digits_4 (char s[],char t[])
{
    int n=strlen(s);
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='4')
        {
            s[i]='1';
            t[i]='3';
        }
        else{
            t[i]='0';
        }

    }

}
int main()
{
    int T,nr,nr_1=0;
    char s[102],c;
    char t[102];
    char p[204][102];
    scanf("%d",&T);
    scanf("%c",&c);
    nr=T;

    while(T!=0)
    {
        gets(s);
        strcpy(t,s);
        digits_4(s,t);
        strcpy(p[nr_1],s);
        nr_1=nr_1+1;
        strcpy(p[nr_1],t);
        nr_1=nr_1+1;
        T--;

    }
    nr_1=0;
    for(int i=0;i<nr;i++)
    {
        printf("Case #%d: %s ",i+1,p[nr_1]);
        int n=strlen(p[nr_1+1]);
        int ok=1;
        for(int j=0;j<n;j++)
    {
          if(p[nr_1+1][j]!='0')
        {
            ok=0;
        }
        if(ok==0)
            printf("%c",p[nr_1+1][j]);
    }
    printf("\n");
        nr_1=nr_1+2;
    }

    return 0;
}
