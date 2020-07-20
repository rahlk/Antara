#include<stdio.h>
#include<string.h>
int main(){
    int t,n,p,len;
    char str[1000006];
    char ans[1000006];
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        scanf("%d",&n);
        scanf("%s",str);
        len = strlen(str);
        for(int i=0;i<len;i++){
            if(str[i]=='E')
                ans[i]='S';
            else
                ans[i]='E';
        }
        ans[len]='\0';
        printf("%s\n",ans);
    }
    return 0;
}