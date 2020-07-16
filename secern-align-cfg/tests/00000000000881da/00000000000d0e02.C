#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int T,i,mazesize,str_len,j;
    scanf("%d",&T);
    
    for(i=1;i<=T;i++)
    {
        char ans[500000],str[50000];
        scanf("%d",&mazesize);
        scanf("%s",str);
        str_len=strlen(str);
        for(j=0;j<str_len;j++)
        {
            if(str[j]=="E")
                ans[j]="S";
            else
                ans[j]="E";
            
        }
        
        printf("Case #%d: %s",i,ans);
    }
}