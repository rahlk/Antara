#include<stdio.h>
#include<string.h>
int main(){
    int i,num,sizes[100],j;
    char s[100][50000];
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&sizes[i]);
        scanf("%s",s[i]);
        for(j=0;j<strlen(s[i]);j++)
            if(s[i][j]=='S')
                s[i][j]='E';
            else
                s[i][j]='S';
    }
    for(i=0;i<num;i++)
            printf("Case #%d: %s\n",i+1,s[i]);
    return 0;
}
