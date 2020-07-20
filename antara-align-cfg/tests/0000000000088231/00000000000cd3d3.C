#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    printf("Case #%d: ",i);
    char n[1000];
    char n1[1000];
    char n2[1000];
    scanf("%s",&n);
    for(int i=0;i<strlen(n);i++)
    {
        if(n[i] == '4'){ n1[i] = '3'; n2[i] = '1'; }
        else{ n1[i] = n[i]; n2[i] = '0'; }
    }
    for(int i=0;i<strlen(n);i++)
        printf("%c",n1[i]);
    printf(" ");
    for(int i=0;i<strlen(n);i++)
        printf("%c",n2[i]);
    printf("\n");
    }
}