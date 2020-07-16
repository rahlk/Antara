#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n,t,i;
    scanf("%d",&t);
    scanf("%d",&n);
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='S')
        {
            s[i]='E';
        }
        else if(s[i]=='E')
        {
            s[i]='S';
        }
        i++;
    }
    printf("Case #1: %s",s);
}