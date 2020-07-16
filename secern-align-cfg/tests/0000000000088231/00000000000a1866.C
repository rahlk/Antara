#include <stdio.h>
#include <string.h>

int t;
void f(int n)
{

    char a[101],b[101],k[101];
    scanf("%s",&k);
    printf("Case #%d: ",n);
    int l=strlen(k);
    for(int i=0 ; i<l ; i++)
    {
        if(k[i]=='4')
        {
            a[i]='1';
            b[i]='3';
        }
        else
        {
            a[i]=k[i];
            b[i]='0';
        }
    }
    int f=0;
    for(int i=0 ; i<l ; i++)
        printf("%c",a[i]);
    printf(" ");
    for(int i=0 ; i<l ; i++)
    {
        if(b[i]!='0')
        {
            f=1;
        }
        if(f==1)
            printf("%c",b[i]);
    }
    printf("\n");
}
int main(void)
{
    scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        f(i);
    }
    return 0;
}
