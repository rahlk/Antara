#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int T,i,mazesize,stlen,j;
scanf("%d",&T);
for(i=1;i<=T;i++){
char answer[500000], str[50000];
scanf("%d",&mazesize);
scanf("%s",str);
stlen = strlen(str);

for(j=0;j<stlen;j++){

if(str[j]=='E')
answer[j]='S';
else
answer[j]='E';
}
printf("Case #%d: %s",i,answer);
    }
}