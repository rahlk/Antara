#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n,t,i=0,c=0,j;
    scanf("%d",&t);
for(j=1;j<=t;j++)
{
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
}
for(c=0;c<=t;c++)
{
    
    while(s[c]!='\0'){
        
    printf("Case #1: %c",s[c]);
    c++;
    }
}
}