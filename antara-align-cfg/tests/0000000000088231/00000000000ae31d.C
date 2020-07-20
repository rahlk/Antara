#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
    char a[1000000],b[1000000];
    scanf("%s",a);
    strcpy(b,a);
    int i,len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==52)
            a[i]=50;
        printf("%c",a[i]);
    }
    printf(" ");
    int t=0;
    for(i=0;i<len;i++)
    {
        if(b[i]==52)
        {
            printf("%d",2);
            t=1;
        }
        else
        {
            if(t>0)
                printf("%d",0);
        }
    }
    printf("\n");
    }
    return 0;
}
