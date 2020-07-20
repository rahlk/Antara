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
        scanf("%ld",&n);
        s=(char*)malloc(sizeof(char)*((n*2)-2));
        scanf("%s",s);
        printf("Case #%ld: ",i+1);
        for(long j=0;j<(n*2)-2;j++){
            if(s[j]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
}