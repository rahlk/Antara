#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    char *s;
    char *a;
    long n;
    for(long i=0;i<t;i++){
        scanf("%d",&n);
        s=(char*)malloc(sizeof(char)*((n*2)-2));
        scanf("%s",s);
        a=(char*)malloc(sizeof(char)*((n*2)-2));
        for(long j=0;j<(n*2)-2;j++){
            if(s[j]=='S')
                a[j]='E';
            else
                a[j]='S';
        }
        printf("Case #%d: %s\n",i+1,a);
    }
}